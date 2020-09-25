#include<iostream>
#include<string>
using namespace std;
class A
{
public:
	virtual void Xuat()
	{
		cout << "Day la A";
	}
};
class B:public A 
{
public:
	void Xuat()
	{
		cout << "Day la B";
	}
};
class C:public A
{
public:
	void Xuat()
	{
		cout << "Day la C";
	}
};


int main()
{
	A* x = new B;
	x->Xuat();
	return 0;
}