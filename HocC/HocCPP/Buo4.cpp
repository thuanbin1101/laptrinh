#include<iostream>
#include<math.h>
using namespace std;

class phanso
{
private:
	int tuso;
	int mauso;
public:
	void nhap()
	{
		cout << "\nNhap tu so :";
		cin >> tuso;
		cout << "\nNhap mau so:";
		cin >> mauso;
	}
	void xuat()
	{
		cout << tuso << "/" << mauso;
	}
	phanso nhan(phanso ps1)
	{
		phanso ketqua;
		if (mauso != ps1.mauso && mauso != 0 && ps1.mauso != 0)
		{
			ketqua.tuso = tuso * ps1.tuso;
			ketqua.mauso = mauso * ps1.mauso;
		}
		else if (mauso == ps1.mauso && mauso != 0 && ps1.mauso != 0)
		{
			ketqua.tuso = tuso * ps1.tuso;
			ketqua.mauso = mauso * ps1.mauso;
		}	
		else if (mauso == 0 || ps1.mauso == 0)
		{
			cout << "\nMau phai khac 0";
		}
		return ketqua;
	}
	phanso nghichdao()
	{
		phanso kq;
		if (this->tuso > 0)
		{
			kq.tuso = this->mauso;
			kq.mauso = this->tuso;
		}
		else
		{
			cout << "\nKhong nghich dao duoc phan so";
			kq.tuso = this->tuso;
			kq.mauso = this->mauso;
		}
		return kq;
	}
	int UCLN(int x, int y)
	{
		if (x < 0)
		{
			x *= -1;
		}
		if (y < 0)
		{
			y *= -1;
		}
		while (x != y)
		{
			if (x > y)
			{
				x = x - y;
			}
			else
			{
				y = y - x;
			}
		}
		return x;
	}
	// ham rut gon 1 phan so
	phanso rut_Gon_1_Phan_So()
	{
		phanso kq;
		int ucln = UCLN(x.tuso, mauso);
		tuso = tuso / ucln;
		mauso = mauso / ucln;
	
	}
};
int main()
{
	phanso x1;
	phanso x2;
	phanso x3;
	phanso nd;
	phanso nd2;
	phanso rutgon1;
	cout << "\nNhap phan so 1\n";
	x1.nhap();
	cout << "\nNHap phan so 2\n";
	x2.nhap();
	cout << "\nXuat phan so 1:";
	x1.xuat();
	cout << "\nXuat phan so 2 ";
	x2.xuat();
	cout << "\nRut gon phan so 1";
	x1.rut_Gon_1_Phan_So(x1);
	rutgon1.xuat();
	x1.xuat();
	cout << "\nTich 2 phan so\n";
	x3= x2.nhan(x1);
	x3.xuat();
	cout << "\nNghich dao phan so 1\n";
	nd = x1.nghichdao();
	nd.xuat();
	cout << "\nNghich dao phan so 2\n";
	nd2 = x2.nghichdao();
	nd2.xuat();
	cout << "\nTong 2 phan so nghich sao\n";
	nd2.nhan(nd).xuat();
	return 0;
}