#include <iostream>
using namespace std;
struct Node {
    Node * Next;
    int data;
};
class Stack {    // 先进后出，用于存放除得的余数，取栈元素的时候正好于计算的相反，参见 短除法取得的余数的逆序为二进制数
public:
    Stack();
    ~Stack();
    char GetTop();
    bool Push(char);
    bool Isempty();
    bool Pop();
private:
    Node * Head;
};
class Queue {    //先进先出，用于存放计算获得的每一位上的数值，参见 位权展开法，正序
public:
    Queue();
    ~Queue();
    char GetTop();
    bool Add(char);
    bool Drop();
    bool Isempty();
private:
    Node * Head;
    Node * Tail;
};

void Ten_Other(char[],int,int,char[],int&);    //数组指针，长度，转换进制 10 ->x    , 目标数组，组长
void Other_Ten(char[],int,int,char[],int&);    //数组指针，长度，转换进制 x  ->10  , 目标数组，组长
void Run(char*,int,int,int,char*,int&); //重载数组，长度，当前数组进制，目标进制
void Show(char[],int);
void Create(char[],int&);

int main() {
    
    bool flag = true;
    const int max = 25;
    char Arr[max];        // 作为原始数组 或 目标进制放入该数组中
    int len=max;        // 数组最大字符数据    也同时是目标数组的长度
    while(flag) {
        cout<<"请输入您要转换的进制(以 # 作为结束符)：";
        Create(Arr, len);
        cout<<"请输入您刚输入的进制数和目标进制数:";
        int start, end;
        cin>> start>> end;

        cout<<"进制转换:  ";
        Show(Arr, len);
        Run(Arr, len, start, end, Arr, len);
        cout<<" -> ";
        Show(Arr, len);
        cout<<endl;
        cout<<"输入0 结束， 输入1 继续: " ;
        cin>> flag;
    }
    
    //delete[] Arr;
    return 0;
}

void Create(char* m,int& len) {
    char ch;
    int i=0;
    cin>> ch;
    while( ch!='#') {
        m[i++] = ch;
        cin>> ch;
    }
    len = i;
}
void Show(char* m,int len) {
    for(int i=0; i<len; ++i)
        cout<<m[i];
}
void Run(char* str,int length,int ton,int con,char* Arr,int& len) {
    int AL;
    if(ton==10) {        //        R -> 10
        Ten_Other(str, length, con, Arr, AL);
    } else if(con==10) { //        10 -> R
        Other_Ten(str, length, ton, Arr, AL);
    } else { 
        Other_Ten(str, length, ton, Arr, AL);    // 先将原始进制转化为10 进制
        Ten_Other(Arr, AL, con, Arr, AL);        //再将10 进制 转化为目标进制
    }
    len = AL;
}
void Ten_Other(char* str,int length,int con,char* Array,int& AL) {
    Stack s;
    Queue q;                                //注： 本函数结束后自动析构 s q
    int i=0, m=0, len=length;
    double n=0;
    while( str[i]!='.' && len!=0) {        // 将整数存放在 m 中
        m = (((int)str[i]-'0') + m)*10;        /// 
        i++;
        len--;
    }
    m = m / 10;        // 注意：此时除以 10，因为上面的while中，对整数的末尾多乘了一次
    if(len!=0) {    //判断是否有 .  有则将下标前置一个到小数点之后，
        i++;
        len--;    
    }
    double tem=1;    // 此处不能为int ，否则下面计算 n 所得的结果为整数：((int)(str[length-len]-48)) / tem，结果为整数
    while( len>0) {        // 将小数部分存放在 n 中
        tem = 10 * tem;
        n = ((int)(str[length-len]-48)) / tem + n;
        len--;
    }
    // 开始转换进制  m为整数部分， n为小数部分
    while( m!=0) {    // 整数用栈
        tem = m % con;  // tem为全局变量
        m = m/con;
        s.Push(tem);    // tem可能大于9 ，即为十六进制数
    }    // 将取余所得的全部放入栈中
    i = 5;    // i 为全局变量
    double dou=0;
    while(i!=0 && n!=0) {    // 对小数部分做五次运算  小数部分入队
        dou = n * con;    
        m = dou;    //再次使用全局变量 tem ，当tem 中的内容不需要的时候可任意使用
        q.Add(m);
        n = dou - m;    // 去掉整数部分再次执行计算小数
    }    // 取得小数部分的进制数，可能含有十六进制所对应的字母序列
    
//    char Array[20];     // 将数据存放在 数组里面
    char ch;
    i = 0;        //  注: i++ 表示先用再加！
    if( s.Isempty()==true) {    // 判断是否含有整数，没有整数部分，应该放入 0，然后放 .  例如: 0 . 5124
        Array[i++] = '0';
    }
    while( !s.Isempty()) {    // 栈不空，即栈含有数值，放入数组中
        m = s.GetTop();            // 得到的是数值
        if(m>=0 && m<=9) {        // 通过上面的计算得到的数值都是在0 ~ 15 之间
            ch = m + 48;        // 45的ASCII码为 字符 0
        } else {
            ch = m + 55;        // 若 m = 10; 则因为 A ； 65 = 10 + 55；
        }
        Array[i++] = ch;
        s.Pop();                // 将已访问过得头结点出栈，即删除
    }        // 整数部分放完
    if( !q.Isempty()) {        // 队列 q 不空，表示含有小数位，故需要小数点 “ . ”， 若无小数位，则不需要“ . ”
        Array[i++] = '.';
    }
    while( !q.Isempty()) {    
        m = q.GetTop();            // 得到的是数值
        if(m>=0 && m<=9) {        // 通过上面的计算得到的数值都是在0 ~ 15 之间
            ch = m + 48;        // 45的ASCII码为 字符 0
        } else {
            ch = m + 55;        // 若 m = 10; 则因为 A ； 65 = 10 + 55；
        }
        Array[i++] = ch;
        q.Drop();
    }
    
    AL = i;        // 注意： 此时的 i 变成了数组的组长，所以将组长存放在 AL中    
}

void Other_Ten(char* str,int length,int Other,char* Array,int& AL) {
    Stack s;
    Queue q;                                //注： 本函数结束后自动析构 s q
    int i=0, len=length, Integer=0, m=0;
    double Dicimal=0;    // len为length的一份拷贝 Integer存放整数 Dicimal 小数
    int tem=0;
    while(str[i]!='.' && len!=0) {            // 整数的数值入队,不含小数点
        tem = str[i]- 48;
        if(str[i]>='A' && str[i]<='F') {         //当为十六进制的时候 就不能够 减去字符 0 的ascii码而得到目标数值
            tem = str[i]- 55;
        }
        q.Add( tem);
        len--;
        i++;
    }    // i 为队长  len 为入队后剩余的字符个数

    while(i!=1) {            // 不计算倒数第一位
        m = q.GetTop();        //获取头结点
        q.Drop();            //将头结点出栈删除    
        Integer = (m + Integer) * Other;        
        i--;
    }
    Integer = Integer + (int)q.GetTop();    // 计算最后一位，整个值加上最后一个值，得到整数部分的目标进制数
    q.Drop();
    // 以上整数部分操作完毕

    len--;    // len--后，为-1，表str全为整数，为0，表剩余一个 ‘ . ’， 大于0，表含有小数点，且点后有数
    while( len>0) {
        m = str[length-len]- 48;
        if( str[length-len]>='A' && str[length-len]<='F') {
            m = str[length-len] - 65;
        }
        s.Push( m);    // length-len,例如，共长8，小数位为3， 8-3=5，此时的str[5]为小数位第一个
        len--;
    }        //将小数位全部入栈

    while( !s.Isempty()) {    // s不空表示含有小数位
        m = s.GetTop();
        s.Pop();        // m 为全局变量,再次使用
        Dicimal = (m + Dicimal) / Other;
    }    

//    cout<<Integer+Dicimal<<"（D）"<<endl;        得到的数值，为了统一将其放入数组中
//    以下全部为了将数据放入数组中，    一开始未意识到，故此多了一些代码段
    i = 0;
    if(Integer==0) {
        Array[i++] = '0';
    }
    while(Integer!=0) {    // 将整型入栈
        m = Integer % 10; // m 为整型
        Integer = Integer / 10;
        s.Push(m);
    }
    char ch;
    while(!s.Isempty()) {    // 将栈元素放入数组
        ch = s.GetTop() + 48;
        s.Pop();
        if( ch>'9') {        // 判断是否为十六进制数
            ch = ch + 7;
        }
        Array[i++] = ch;
    }
    
    if(Dicimal!=0) {
        Array[i++] = '.';
    } 
    
    while(Dicimal!=0) {
        Dicimal = Dicimal * 10;
        m = Dicimal;
        Dicimal = Dicimal - m;
        q.Add(m);
    }
    while(!q.Isempty()) {
        ch = q.GetTop() + 48;
        q.Drop();
        if( ch>'9') {        // 判断是否为十六进制数
            ch = ch + 7;
        }
        Array[i++] = ch;
    }
    AL = i;
}

Stack::Stack() {
    Head = new Node();
    Head->Next = NULL;
}

Stack::~Stack() {
    Node * p;
    while(Head) {
        p = Head;
        Head = Head->Next;
        delete p;
    }
}
char Stack::GetTop() {
    if(Isempty()) {
        return '\0';
    } else {
        return Head->data;
    }
}
bool Stack::Push(char ch) {
    Node * pNew = new Node();
    pNew->data = ch;
    pNew->Next = Head;
    Head = pNew;
    return true;
}
bool Stack::Pop() {
    if(Isempty()) {
        return false;
    } else {
        Node * tem = Head;
        Head = Head->Next;
        delete tem;
    }
    return true;
}
bool Stack::Isempty() {
    return Head->Next==NULL;
}

Queue::Queue() {
    Head = new Node();
    Head->Next = NULL;
    Tail = Head;
}
Queue::~Queue() {
    Node * p;
    while(Head) {
        p = Head;
        Head = Head->Next;
        delete p;
    }
    Tail = NULL;
}
char Queue::GetTop() {
    if(Isempty()) {
        return '\0';
    } else {
        return Head->Next->data;
    }
}
bool Queue::Add(char ch) {
    Node * pNew = new Node();
    pNew->data = ch;
    Tail->Next = pNew;
    pNew->Next = NULL;
    Tail = pNew;
    return true;
}
bool Queue::Drop() {
    if(Isempty()) {
        return false;
    } else {
        Node * tem = Head;
        Head = tem->Next;
        delete tem;
    }
    return true;
}
bool Queue::Isempty() {
    return Head==Tail;
}