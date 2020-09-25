#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<iomanip>
using namespace std;
void hoan_Vi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int tinhTong(int a, int b)
{
	return a + b;
}
class sinhvien
{

};
int main()
{
	int a;
	int b;
	int p;
	int* n;
	float x; 
	float y;

	cout << "Nhap x: "; cin >> x; cout << endl;
	cout << "Nhap y:"; cin >> y;
	cout << setw(15) << a << endl;

	
	//cout<<setiosflags(ios::showpoint)<<setprecision(p);	
	cout << "Thuong cua " << a << " va " << b << " =" << float((x*1.0)/y);
	cout << "Nhap x:";
	cin >> x;
	n = new int[x];  // cap phat bo nho cho bien con tro n
	


	return 0;
}