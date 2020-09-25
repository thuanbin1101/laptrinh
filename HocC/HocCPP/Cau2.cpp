#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

struct sach
{
	string masach;
	string tensach;
	string tacgia;
	int namxb;
};
typedef struct sach Sach;

void nhap_1_Quyen_Sach(Sach &sach)
{
	while (getchar() != '\n');
	cout << "Nhap ma sach: ";
	getline(cin, sach.masach);
	cout << "Nhap ten sach: ";
	getline(cin, sach.tensach);
	cout << "Nhap tac gia: ";
	getline(cin, sach.tacgia);
	cout << "Nhap nam xuat ban: ";
	cin >> sach.namxb;
}
void xuat_1_Quyen_Sach(Sach sach)
{
	cout << endl;
	cout << "Ma sach: " << sach.masach << endl;
	cout << "Ten sach: " << sach.tensach << endl;
	cout << "Tac gia: " << sach.tacgia << endl;
	cout << "Nam xuat ban: " << sach.namxb << endl;
}

struct danhsach
{
	Sach* sach;
	int n;
};
typedef struct danhsach DanhSach;

void nhap_Danh_Sach_Quyen_Sach(DanhSach &ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\nQuyen sach thu " << i + 1 << endl;
		nhap_1_Quyen_Sach(ds.sach[i]);
	}
}

void xuat_Danh_Sach_Quyen_Sach(DanhSach& ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\nQuyen sach thu " << i + 1 << ":" ;
		xuat_1_Quyen_Sach(ds.sach[i]);
	}
}
void tim_Sach(DanhSach ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.sach[i].tensach == "tin hoc dai cuong")
		{
			xuat_1_Quyen_Sach(ds.sach[i]);
		}
	}
}
void hoan_Vi(Sach& x, Sach& y)
{
	Sach temp = x;
	x = y;
	y = temp;
}
void sap_Xep_Sach(DanhSach ds)
{
	for (int i = 0; i < ds.n-1; i++)
	{
		for (int j = i + 1; j < ds.n; j++)
		{
			if (ds.sach[i].tensach > ds.sach[j].tensach)
			{
				hoan_Vi(ds.sach[i], ds.sach[j]);
			}
		}
	}
	xuat_Danh_Sach_Quyen_Sach(ds);
}
int main()
{
	DanhSach ds;
	cout << "Nhap so luong sach: ";
	cin >> ds.n;
	ds.sach = new Sach[ds.n];
	cout << "\n\n\t\t NHAP DANH SACH QUYEN SACH \n";
	nhap_Danh_Sach_Quyen_Sach(ds);
	cout << "\n\n\t\t XUAT DANH SACH QUYEN SACH\n";
	xuat_Danh_Sach_Quyen_Sach(ds);
	cout << "\n\n\t\t SACH TIN HOC DAI CUONG\n";
	tim_Sach(ds);
	cout << "\n\n\t\t SAP XEP THEO TU TU abc \n";
	sap_Xep_Sach(ds);
	delete[] ds.sach;
	return 0;

}