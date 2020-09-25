#include<iostream>
#include<string>
#include"iomanip"
#include"stdlib.h"
using namespace std;

struct sinhvien
{
	string masv;
	string hoten;
	string lop;
	float diem;
};
typedef struct sinhvien SinhVien;

void nhap_1_Sinh_Vien(SinhVien &x)
{
	while (getchar() != '\n'); // rewind(stdin) , fflush(stdin)
	cout << "\nMa sv: ";
	getline(cin, x.masv);
	cout << "\nHo ten: ";
	getline(cin, x.hoten);
	cout << "\nLop: ";
	getline(cin, x.lop);
	cout << "\nDTB: ";
	cin >> x.diem;
}
void xuat_1_Sinh_Vien(SinhVien &x)
{
	cout << "\n" << setw(10) << x.masv << setw(20) << x.hoten << setw(10) << x.lop << setw(10) << x.diem;
}
struct danhsach
{
	SinhVien* sv;
	int n;
};
typedef struct danhsach DanhSach;

void nhap_Danh_Sach_Sinh_Vien(DanhSach &ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\n\n\t\t\t\tSinh vien thu " << i + 1 << endl;
		nhap_1_Sinh_Vien(ds.sv[i]);
	}
}
void xuat_Danh_Sach_Sinh_Vien(DanhSach ds)
{
	cout << "\n" << setw(10) << "Masv" << setw(20) << "ho ten" << setw(10) << "Lop" << setw(10) << "DTB";
	for (int i = 0; i < ds.n; i++)
	{
		xuat_1_Sinh_Vien(ds.sv[i]);
	}


}

void sap_Xep_Tang_Dan(DanhSach ds)
{
	SinhVien temp;
	for (int i = 0; i < ds.n - 1 ; i++)
	{
		for (int j = i + 1; j < ds.n; j++)
		{
			if (ds.sv[i].diem > ds.sv[j].diem)
			{
				
				temp = ds.sv[i];
				ds.sv[i] = ds.sv[j];
				ds.sv[j] = temp;
			}
		}
	}
}
int main()
{
	DanhSach ds;
	cout << "nhap so luong sinh vien:";
	cin >> ds.n;
	ds.sv = new sinhvien[ds.n];
	cout << "\n\n\t\t NHAP DANH SACH SINH VIEN \n";
	nhap_Danh_Sach_Sinh_Vien(ds);
	cout << "\n\n\t\t XUAT DANH SACH SINH VIEN\n";
	xuat_Danh_Sach_Sinh_Vien(ds);
	cout << "\n\n\t\t SAP XEP DANH SACH SINH VIEN TANG DAN\n";
	sap_Xep_Tang_Dan(ds);
	xuat_Danh_Sach_Sinh_Vien(ds);
	delete [] ds.sv;
	return 0;
}