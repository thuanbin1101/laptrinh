#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct phanso
{
	int tuso;
	int mauso;
};
typedef struct phanso PhanSo;

void nhap_1_Phan_So(PhanSo  &x)
{
	printf("\nNhap tu so:");
	scanf("%d", &x.tuso);
	printf("\nNhap mau so:");
	scanf("%d", &x.mauso);
}

void xuat_1_Phan_So(PhanSo &x)
{
	printf(" %d / %d ", x.tuso, x.mauso);
}

PhanSo Tong_2_Phan_So(PhanSo x, PhanSo y)
{
	PhanSo ketqua;
	if (x.mauso != y.mauso)
	{
		ketqua.tuso = (x.tuso * y.mauso) + (x.mauso * y.tuso);
		ketqua.mauso = x.mauso * y.mauso;
	}
	else
	{
		ketqua.tuso = (x.tuso + y.tuso);
		ketqua.mauso = x.mauso;
	}
	return ketqua;
}

PhanSo Hieu_2_Phan_So(PhanSo x, PhanSo y)
{
	PhanSo ketqua;
	if (x.mauso != y.mauso)
	{
		ketqua.tuso = (x.tuso * y.mauso) - (x.mauso * y.tuso);
		ketqua.mauso = x.mauso * y.mauso;

	}
	else
	{
		ketqua.tuso = (x.tuso - y.tuso);
		ketqua.mauso = x.mauso;

	}
	return ketqua;
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

int UCLN(int x, int y)
{
	if (x < 0)
	{
		x = x * -1;
	}
	if (y < 0)
	{
		y = y * -1;
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

void rut_Gon_1_Phan_So(PhanSo& x)
{
	int ucln = UCLN(x.tuso, x.mauso);
	x.tuso = x.tuso / ucln;
	x.mauso = x.mauso / ucln;
}

struct danhsach
{
	PhanSo arr[10];
	int n;
};
typedef struct danhsach DanhSach;

void nhap_Danh_Sach_Phan_So(DanhSach& ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printf("\nNhap phan so thu %d", i + 1);
		nhap_1_Phan_So(ds.arr[i]);
	}
}


void xuat_Danh_Sach_Phan_So(DanhSach ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printf("\nPhan so thu %d: ", i + 1);
		xuat_1_Phan_So(ds.arr[i]);
	}
}

void rut_Gon_Danh_Sach_Phan_So(DanhSach& ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		rut_Gon_1_Phan_So(ds.arr[i]);
	}
}

PhanSo tinh_Tong_Tat_Ca_Phan_So(DanhSach ds)
{
	PhanSo Tong = ds.arr[0];
	for (int i = 1; i < ds.n; i++)
	{
		Tong = Tong_2_Phan_So(Tong, ds.arr[i]);
	}
	rut_Gon_1_Phan_So(Tong);
	return Tong;
}

PhanSo tinh_Hieu_Tat_Ca_Phan_So(DanhSach ds)
{
	PhanSo Hieu = ds.arr[0];

	for (int i = 1; i < ds.n; i++)
	{
		Hieu = Hieu_2_Phan_So(Hieu, ds.arr[i]);
	}
	//rut_Gon_1_Phan_So(Hieu);
	return Hieu;
}

PhanSo tinh_Tich_Tat_Ca_Phan_So(DanhSach ds)
{
	PhanSo Tich = ds.arr[0];
	for (int i = 1; i < ds.n; i++)
	{
		Tich = Tich_2_Phan_So(Tich, ds.arr[i]);
	}
	rut_Gon_1_Phan_So(Tich);
	return Tich;
}

PhanSo tinh_Thuong_Tat_Ca_Phan_So(DanhSach ds)
{
	PhanSo Thuong = ds.arr[0];
	for (int i = 1; i < ds.n; i++)
	{
		Thuong = Thuong_2_Phan_So(Thuong, ds.arr[i]);
	}
	rut_Gon_1_Phan_So(Thuong);
	return Thuong;
}


int main()
{

	DanhSach ds;
	PhanSo Tong;
	PhanSo Hieu;
	PhanSo Tich;
	PhanSo Thuong;
	printf("\nNhap so luong phan so:");
	scanf("%d", &ds.n);
	printf("\n\n\t\tNHAP DANH SACH PHAN SO");
	nhap_Danh_Sach_Phan_So(ds);
	printf("\n\n\t\tXUAT DANH SACH PHAN SO");
	xuat_Danh_Sach_Phan_So(ds);
	printf("\n\n\t\tPHAN SO SAU KHI RUT GON");
	rut_Gon_Danh_Sach_Phan_So(ds);
	xuat_Danh_Sach_Phan_So(ds);
	printf("\n\n\t\t TONG CAC PHAN SO\n ");
	Tong = tinh_Tong_Tat_Ca_Phan_So(ds);
	xuat_1_Phan_So(Tong);
	printf("\n\n\t\t HIEU CAC PHAN SO\n");
	Hieu = tinh_Hieu_Tat_Ca_Phan_So(ds);
	xuat_1_Phan_So(Hieu);
	printf("\n\n\t\t TICH CAC PHAN SO\n");
	Tich = tinh_Tich_Tat_Ca_Phan_So(ds);
	xuat_1_Phan_So(Tich);
	printf("\n\n\t\t THUONG CAC PHAN SO\n");
	Thuong = tinh_Thuong_Tat_Ca_Phan_So(ds);
	xuat_1_Phan_So(Thuong);


	return 0;
}
