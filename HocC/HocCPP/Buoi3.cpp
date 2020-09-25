#include<iostream>
#include<math.h>
using namespace std;

class Diem
{
private: 
	int x, y;
public:
	void nhap()
	{
		cout << "Nhap toa do x: ";
		cin >> x;
		cout << "Nhap toa do y:";
		cin >> y;
	}
	void xuat()
	{
		cout << "( " << x << "," << y << " )";
	}
	float kc(Diem d3)
	{
		return sqrt((this->x - d3.x) * (this->x - d3.x) + (this->y - d3.y) * (this->y - d3.y));
	}
};




int main()
{
	Diem d1, d2;
	cout << "\nNhap diem d1\n";
	d1.nhap(); // goi binh thuong
	//d1.Diem::nhap(); // goi tuong minh
	cout << "\nNhap diem d2\n";
	d2.nhap();
	cout << "Xuat diem d1 va d2\n";
	cout << " d1 = ";
	d1.xuat();
	cout << endl;
	cout << " d2 = ";
	d2.xuat();
	cout << "\nKhoang cach 2 diem\n";
	cout << d2.kc(d1);
	return 0;
}