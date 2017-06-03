#include <iostream>
using namespace std;
class C
{
public:
    C(){
        cout<<"C()"<<endl;
    }
    ~C(){
        cout<<"~C()"<<endl;
    }
};

class D
{
public:
    D(){
        cout<<"D()"<<endl;
    }
    ~D(){
        cout<<"~D()"<<endl;
    }
};

class A
{
public:
    C c;
    A(){
        cout<<"A()"<<endl;
    }
    ~A(){
        cout<<"~A()"<<endl;
    }
};

class B:public A
{
public:
    D d;
    B(){
        cout<<"B()"<<endl;
    }
    ~B(){
        cout<<"~B()"<<endl;
    }
};

int main(){
    B b;
    return 0;
}