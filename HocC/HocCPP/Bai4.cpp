#include<iostream>
using namespace std;

struct phanso
{
	int tuso;
	int mauso;
};
typedef struct phanso PhanSo;

void nhap_1_Phan_So(PhanSo &x)
{
	cout << "\nNhap tu so: ";
	cin >> x.tuso;
	do
	{
		cout << "\nNhap mau so: ";
		cin >> x.mauso;

		if (x.mauso == 0)
		{
			cout << "\nMau so ban nhap khong hop le , vui long kiem tra lai";
		}
	} while (x.mauso == 0);
}
void xuat_1_Phan_So(PhanSo x)
{
	cout << "\nPhan so: " << x.tuso << '/' << x.mauso << endl;
}
struct danhsach
{
	PhanSo* ps; // khai bao mang 1 chieu cac con tro
	int n;
};
typedef struct danhsach DanhSach;

void nhap_Danh_Sach_Phan_So(DanhSach& ds)
{
	for (int i = 0; i < ds.n; i++)
	{	
		cout << "\nNhap phan so thu " << i + 1 << endl;
		nhap_1_Phan_So(ds.ps[i]);
	}
}
void xuat_Danh_Sach_Phan_So(DanhSach ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\n\n\t\t PHAN SO THU  " << i + 1;
		xuat_1_Phan_So(ds.ps[i]);
	}
}

// ham tim UCLN
int UCLN(int x, int y)
{
	if (x < 0)
	{
		x *= -1;
	}
	if(y < 0)
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
void rut_Gon_1_Phan_So(PhanSo &x)
{
	int ucln = UCLN(x.tuso, x.mauso);
	x.tuso = x.tuso / ucln;
	x.mauso = x.mauso / ucln;
}
// ham rut gon tat ca cac phan so
void rut_Gon_Danh_Sach_Phan_So(DanhSach &ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		rut_Gon_1_Phan_So(ds.ps[i]);	
	}

}
// ham tinh tong 2 phan so
PhanSo tinh_Tong_2_Phan_So(PhanSo x,PhanSo y)
{
	PhanSo Tong;
	if (x.mauso != y.mauso)
	{
		Tong.tuso = (x.tuso * y.mauso) + (y.tuso * x.mauso);
		Tong.mauso = (x.mauso * y.mauso);
	}
	else
	{
		Tong.tuso = (x.tuso + y.tuso);
		Tong.mauso = (x.mauso);
	}

	return Tong;
	/*int Tu, Mau;
	Tu = x.tuso * y.mauso + x.mauso * y.tuso;
	Mau = x.mauso * y.mauso;
	return (float)Tu / Mau;*/
}
PhanSo tinh_Hieu_2_Phan_So(PhanSo x, PhanSo y)
{
	PhanSo Hieu;
	if (x.mauso != y.mauso)
	{
		Hieu.tuso = (x.tuso * y.mauso) - (y.tuso * x.mauso);
		Hieu.mauso = (x.mauso * y.mauso);
	}
	else
	{
		Hieu.tuso = (x.tuso - y.tuso);
		Hieu.mauso = (x.mauso);
	}
	return Hieu;
}
PhanSo Tich_2_Phan_So(PhanSo x, PhanSo y)
{
	PhanSo ketqua;
	if (x.mauso != y.mauso)
	{
		ketqua.tuso = x.tuso * y.tuso;
		ketqua.mauso = x.mauso * y.mauso;
	}
	else
	{
		ketqua.tuso = x.tuso * y.tuso;
		ketqua.mauso = x.mauso * y.mauso;
	}

	return ketqua;
}

PhanSo Thuong_2_Phan_So(PhanSo x, PhanSo y)
{	
	PhanSo ketqua;
	ketqua.tuso = x.tuso * y.mauso;
	ketqua.mauso = x.mauso * y.tuso;
	return ketqua;
}

// ham tinh tong tat ca phan so
PhanSo tinh_Tong_Tat_Ca_Phan_So(DanhSach ds)
{
	PhanSo Tong = ds.ps[0];
	for (int i = 1; i < ds.n; i++)
	{
		Tong = tinh_Tong_2_Phan_So(Tong, ds.ps[i]);
	}
	rut_Gon_1_Phan_So(Tong);
	return Tong;
}

PhanSo tinh_Hieu_Tat_Ca_Phan_So(DanhSach ds)
{
	PhanSo Hieu = ds.ps[0];
	for (int i = 1; i < ds.n; i++)
	{
		Hieu = tinh_Hieu_2_Phan_So(Hieu, ds.ps[i]);
	}
	//rut_Gon_1_Phan_So(Hieu);
	return Hieu;
}
PhanSo tinh_Tich_Tat_Ca_Phan_So(DanhSach ds)
{
	PhanSo Tich = ds.ps[0];
	for (int i = 1; i < ds.n; i++)
	{
		Tich = Tich_2_Phan_So(Tich, ds.ps[i]);
	}
	rut_Gon_1_Phan_So(Tich);
	return Tich;
}

PhanSo tinh_Thuong_Tat_Ca_Phan_So(DanhSach ds)
{
	PhanSo Thuong = ds.ps[0];
	for (int i = 1; i < ds.n; i++)
	{
		Thuong = Thuong_2_Phan_So(Thuong, ds.ps[i]);
	}
	rut_Gon_1_Phan_So(Thuong);
	return Thuong;
}
int main()
{
	DanhSach ds; // khai bao struct danh sach phan so.
	PhanSo Tong;
	PhanSo Hieu;
	PhanSo Tich;
	PhanSo Thuong;
	cout << "Nhap so luong phan so: ";
	cin >> ds.n;
	// cap phat mang dong 
	ds.ps = new PhanSo[ds.n];
	cout << "\n\n\t\t NHAP DANH SACH PHAN SO \n";
	nhap_Danh_Sach_Phan_So(ds);
	cout << "\n\n\t\t XUAT DANH SACH PHAN SO \n";
	xuat_Danh_Sach_Phan_So(ds);
	cout << "\n\n\t\t RUT GON PHAN SO \n";
	rut_Gon_Danh_Sach_Phan_So(ds);
	xuat_Danh_Sach_Phan_So(ds);
	cout << "\n\n\t\t TONG PHAN SO \n";
	Tong = tinh_Tong_Tat_Ca_Phan_So(ds);
	xuat_1_Phan_So(Tong);
	cout << "\n\n\t\t HIEU PHAN SO \n";
	Hieu = tinh_Hieu_Tat_Ca_Phan_So(ds);
	xuat_1_Phan_So(Hieu);
	printf("\n\n\t\t TICH CAC PHAN SO\n");
	Tich = tinh_Tich_Tat_Ca_Phan_So(ds);
	xuat_1_Phan_So(Tich);
	printf("\n\n\t\t THUONG CAC PHAN SO\n");
	Thuong = tinh_Thuong_Tat_Ca_Phan_So(ds);
	xuat_1_Phan_So(Thuong);

	system("pause");
	delete[] ds.ps;
	return 0;
}