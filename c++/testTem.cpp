/*************************************************************************
    > File Name:  testTem.cpp
    > File Path:  /Users/liangbo/Code/testTem.cpp
    > Author:     Liang Bo
    > Mail:       cs-b@163.com 
    > Funtion:
    > Build Time: 
 ************************************************************************/

#include <iostream>
using namespace std;

template<typename t>
struct tcontainer
{
	virtual void push(const t&) = 0;
	virtual void pop() = 0;
	virtual const t& begin() = 0;
	virtual const t& end() = 0;
	virtual size_t size() = 0;
};

template<typename t>
struct tvector:public tcontainer<t>
{
	static const size_t _step = 100;    //每次增加100个空间
	tvector()
	{
		_size = 0;
		_cap = _step;
		buf = 0;
		re_capacity(_cap);
	}
	~tvector()
	{
		free(buf);
	}
	void re_capacity(size_t s)
	{
		if(!buf)
			buf = (t*)malloc(sizeof(t)*s);
		else
			buf = (t*)realloc(buf,sizeof(t)*s);

	}
	virtual void push(const t& v)
	{
		if(_size >= _cap)
			re_capacity(_cap += _step);
		buf[_size++] = v;
	}
	virtual void pop()
	{
		if(_size)
			_size--;
	}
	virtual const t& begin()
	{
		return buf[0];
	}
	virtual const t& end()
	{
		return buf[_size - 1];
	}
	virtual size_t size()
	{
		return _size;
	}
	const t& operator[] (size_t i)
	{
		if(i >= 0 && i < _size)
			return buf[i];
	}
private:
	size_t _size;
	size_t _cap;
	t* buf;

};

int main(int argc, char const *argv[])
{
	int i;
	tvector<int> v;
	for(i = 0;i < 1000;++i)
	{
		v.push(i);
	}
	for(i = 0;i < 1000;++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<v.size()<<endl;
	cout<<endl;
	return 0;
}







