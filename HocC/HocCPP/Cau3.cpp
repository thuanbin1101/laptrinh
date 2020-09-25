#include<iostream>

using namespace std;
struct sophuc
{
	double phanthuc;
	double phanao;
};
typedef struct sophuc SoPhuc;

void nhap_1_So_Phuc(SoPhuc& sp)
{
	cout << "Nhap phan thuc: " ;
	cin >> sp.phanthuc;
	cout << "Nhap phan ao: ";
	cin >> sp.phanao;
}
void xuat_1_So_Phuc(SoPhuc sp)
{
	if (sp.phanao > 0)
	{
		cout << "(" << sp.phanthuc << " + " << sp.phanao << "i)";
	}
	else if (sp.phanao == 0)
	{
		cout << sp.phanthuc;
	}
	else
	{
		cout << "(" << sp.phanthuc << " - " << ((-1) * sp.phanao) << "i)";
	}
	
}

struct danhsach
{
	SoPhuc* sp;
	int n;
};
typedef struct danhsach DanhSach;

void nhap_Danh_Sach_So_Phuc(DanhSach& ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\n Nhap so phuc thu " << i + 1 << ": " << endl;
		nhap_1_So_Phuc(ds.sp[i]);
	}
}
void xuat_Danh_Sach_So_Phuc(DanhSach ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\nSo phuc thu " << i + 1 << ": ";
		xuat_1_So_Phuc(ds.sp[i]);
	}
}

SoPhuc tinh_Tong_2_So_Phuc(SoPhuc x, SoPhuc y)
{
	SoPhuc kq;
	kq.phanthuc = x.phanthuc + y.phanthuc;
	kq.phanao = x.phanao + y.phanao;
	return kq;
}
SoPhuc tinh_Hieu_2_So_Phuc(SoPhuc x, SoPhuc y)
{
	SoPhuc kq;
	kq.phanthuc = x.phanthuc - y.phanthuc;
	kq.phanao = x.phanao - y.phanao;
	return kq;
}
SoPhuc tinh_Tich_2_So_Phuc(SoPhuc x, SoPhuc y)
{
	SoPhuc kq;
	kq.phanthuc = x.phanthuc * y.phanthuc - x.phanao * y.phanao;
	kq.phanao = x.phanthuc * y.phanao + x.phanao * y.phanthuc;
	return kq;
}
SoPhuc tinh_Thuong_2_So_Phuc(SoPhuc x, SoPhuc y)
{
	SoPhuc kq;
	kq.phanthuc = (x.phanthuc * y.phanthuc + x.phanao * y.phanao) / (y.phanthuc * y.phanthuc + y.phanao * y.phanao);
	kq.phanao = (x.phanao * y.phanthuc - x.phanthuc * y.phanao) / (y.phanthuc * y.phanthuc + y.phanao * y.phanao);
	return kq;
}
SoPhuc tinh_Tong_Tat_Ca_So_Phuc(DanhSach ds)
{
	SoPhuc Tong = ds.sp[0];
	for (int i = 1; i < ds.n; i++)
	{
		Tong = tinh_Tong_2_So_Phuc(Tong, ds.sp[i]);
	}
	return Tong;
}
SoPhuc tinh_Hieu_Tat_Ca_So_Phuc(DanhSach ds)
{
	SoPhuc Hieu = ds.sp[0];
	for (int i = 1; i < ds.n; i++)
	{
		Hieu = tinh_Hieu_2_So_Phuc(Hieu, ds.sp[i]);
	}
	return Hieu;
}
SoPhuc tinh_Tich_Tat_Ca_So_Phuc(DanhSach ds)
{
	SoPhuc Tich = ds.sp[0];
	for (int i = 1; i < ds.n; i++)
	{
		Tich = tinh_Tich_2_So_Phuc(Tich, ds.sp[i]);
	}
	return Tich;
}
SoPhuc tinh_Thuong_Tat_Ca_So_Phuc(DanhSach ds)
{
	SoPhuc Thuong = ds.sp[0];
	for (int i = 1; i < ds.n; i++)
	{
		Thuong = tinh_Thuong_2_So_Phuc(Thuong, ds.sp[i]);
	}
	return Thuong;
}
int main()
{
	DanhSach ds;
	SoPhuc Tong;
	SoPhuc Hieu;
	SoPhuc Tich;
	SoPhuc Thuong;
	cout << "Nhap so luong so phuc: ";
	cin >> ds.n;
	ds.sp = new SoPhuc[ds.n];
	cout << "\n\n\t\t NHAP DANH SACH SO PHUC\n";
	nhap_Danh_Sach_So_Phuc(ds);
	cout << "\n\n\t\t XUAT DANH SACH SO PHUC\n";
	xuat_Danh_Sach_So_Phuc(ds);
	cout << "\n\n\t\t TONG SO PHUC\n";
	Tong = tinh_Tong_Tat_Ca_So_Phuc(ds);
	xuat_1_So_Phuc(Tong);
	cout << "\n\n\t\t HIEU SO PHUC\n";
	Hieu = tinh_Hieu_Tat_Ca_So_Phuc(ds);
	xuat_1_So_Phuc(Hieu);
	cout << "\n\n\t\t TICH SO PHUC\n";
	Tich = tinh_Tich_Tat_Ca_So_Phuc(ds);
	xuat_1_So_Phuc(Tich);
	cout << "\n\n\t\t THUONG SO PHUC\n";
	Thuong = tinh_Thuong_Tat_Ca_So_Phuc(ds);
	xuat_1_So_Phuc(Thuong);
	delete[] ds.sp;
	return 0;
	
}