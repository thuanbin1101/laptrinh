//============ = MẢNG ĐỘNG BÊN STRUCT ============ =
//Bài 3. Khai báo cấu trúc 1 phân số biết rằng 1 phân số luôn luôn có tử số và mẫu số
//1. Nhập danh sách các phân số
//2. Xuất danh sách các phân số
//3. Rút gọn các phân số
//2 / 4 ==> 1 / 2
//3 / 6 ==> 1 / 2
//4. Tìm phân số lớn nhất
//5. Tính tổng tất cả các phân số
//1 / 2
//2 / 3
//==> 7 / 6
//1 / 2
//2 / 3
//==> 7 / 6
//3 / 4
//==> 46 / 24
//==> 23 / 12
#include<stdio.h>
#include<stdlib.h>
struct phanso
{
	int tuso;
	int mauso;

}; typedef struct phanso PhanSo;

void nhap_Phan_So(PhanSo &x)
{
	printf("\nNhap tu so: ");
	scanf("%d", &x.tuso);
	printf("\nNhap mau so: ");
	scanf("%d", &x.mauso);
}

void xuat_Phan_So(PhanSo x)
{
	printf(" %d / %d", x.tuso, x.mauso);
}

// ================= KHAI BÁO DANH SÁCH PHÂN SỐ =========================
struct danhsach
{
	PhanSo *arr;
	int n;
}; typedef struct danhsach DanhSach;

void nhap_Danh_Sach_Phan_So(DanhSach& ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printf("\nNHAP PHAN SO THU %d\n", i + 1);
		nhap_Phan_So(ds.arr[i]);
	}
}

void xuat_Danh_Sach_Tham_So(DanhSach ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printf("\n\t PHAN SO THU %d: ", i + 1);
		xuat_Phan_So(ds.arr[i]);
	}
}

// ham tim UCLN
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

// ham rut gon 1 phan so
void rut_Gon_1_Phan_So(PhanSo& x)
{
	x.tuso = x.tuso / UCLN(x.tuso, x.mauso);
	x.mauso = x.mauso / UCLN(x.tuso, x.mauso);
}

void rut_Gon_Danh_Sach_Phan_So(DanhSach& ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		rut_Gon_1_Phan_So(ds.arr[i]);
	}
}





int main()
{
	DanhSach ds; // khai bao struct danh sach phan so;
	printf("\nNhap so luong phan so:");
	scanf("%d", &ds.n);
	// Cấp phát vùng nhớ cho mảng động
	ds.arr = (PhanSo*)malloc(ds.n * sizeof(PhanSo));
	printf("\n\n\t NHAP DANH SACH PHAN SO");
	nhap_Danh_Sach_Phan_So(ds);
	printf("\n\n\t XUAT DANH SACH PHAN SO");
	xuat_Danh_Sach_Tham_So(ds);
	printf("\n\n\t DANH SACH PHAN SO RUT GON");
	rut_Gon_Danh_Sach_Phan_So(ds);
	xuat_Danh_Sach_Tham_So(ds); 
	free(ds.arr);
}