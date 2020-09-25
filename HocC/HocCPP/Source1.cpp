/* Khai bao cau truc bieu dien thong tin cua mot phan so.
	Viet chuong trinh tinh nhap vao 2 phan so, tinh tong, hieu, tich,
	thuong cua 2 phan so do!
*/
====================================================================================== =

#include<iostream>
using namespace std;

struct PHANSO
{
	int TS;
	int MS;
};

void NhapPS(PHANSO& x)
{
	cout << "Nhap Tu so: "; cin >> x.TS;
	do
	{
		cout << "Nhap Mau so: ";
		cin >> x.MS;
		if (x.MS == 0)
			cout << "Nhap sai, yeu cau nhap lai mau so: ";
	} while (x.MS == 0);
}

void XuatPS(PHANSO x)
{
	cout << x.TS << "/" << x.MS;
}

float TongPS(PHANSO x1, PHANSO x2)
{
	int Tu, Mau;
	Tu = x1.TS * x2.MS + x1.MS * x2.TS;
	Mau = x1.MS * x2.MS;
	return (float)Tu / Mau;
}

float HieuPS(PHANSO x1, PHANSO x2)
{
	int Tu, Mau;
	Tu = x1.TS * x2.MS - x1.MS * x2.TS;
	Mau = x1.MS * x2.MS;
	return (float)Tu / Mau;
}

float TichPS(PHANSO x1, PHANSO x2)
{
	int Tu, Mau;
	Tu = x1.TS * x2.TS;
	Mau = x1.MS * x2.MS;
	return (float)Tu / Mau;
}

float ThuongPS(PHANSO x1, PHANSO x2)
{
	int Tu, Mau;
	Tu = x1.TS * x2.MS;
	Mau = x1.MS * x2.TS;
	return (float)Tu / Mau;
}

void main()
{
	PHANSO ps1, ps2;

	cout << "Nhap phan so: ";

	NhapPS(ps1);
	NhapPS(ps2);

	cout << "Phan so 1 la: "; XuatPS(ps1);
	cout << "\nPhan so 2 la: "; XuatPS(ps2);

	cout << "\nTong 2 phan so la: " << TongPS(ps1, ps2);

	cout << "\nHieu 2 phan so la: " << HieuPS(ps1, ps2);

	cout << "\nTich 2 phan so la: " << TichPS(ps1, ps2);

	cout << "\nThuong 2 phan so la: " << ThuongPS(ps1, ps2);

	cout << endl;
}