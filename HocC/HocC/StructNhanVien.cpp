#include<stdio.h>
#include<string.h>
struct nhanvien
{
	char manv[30];
	char hoten[30];
	int tuoi;
	char phongban[30];
}; typedef struct nhanvien NhanVien;

void nhap_1_Nhan_Vien(NhanVien& nv)
{
	printf("\nNhap ma nhan vien: ");
	rewind(stdin);
	gets_s(nv.manv);
	printf("\nNhap ho ten: ");
	rewind(stdin);
	gets_s(nv.hoten);
	printf("\nNhap phong ban:");
	rewind(stdin);
	gets_s(nv.phongban);
	printf("\nNhap tuoi: ");
	scanf("%d", &nv.tuoi);
}

void xuat_1_Nhan_Vien(NhanVien nv)
{
	printf("\nManv: %s", nv.manv);
	printf("\nTen: %s", nv.hoten);
	printf("\nPhong ban: %s", nv.phongban);
	printf("\nTuoi: %d", nv.tuoi);
}

void nhap_Danh_Sach_Nhan_Vien(NhanVien nv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhan vien thu %d", i + 1);
		nhap_1_Nhan_Vien(nv[i]);
	}
}

void xuat_Danh_Sach_Nhan_Vien(NhanVien nv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhan vien thu %d", i + 1);
		xuat_1_Nhan_Vien(nv[i]);
		printf("\n");
	}
}

void tuoi_Nghi_Huu(NhanVien nv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (nv[i].tuoi >= 55)
		{
			xuat_1_Nhan_Vien(nv[i]);
			printf("\n");
		}
	}
}

void phong_Ke_Toan(NhanVien nv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(nv[i].phongban, "ke toan") == 0)
		{
			xuat_1_Nhan_Vien(nv[i]);
			printf("\n");
		}
	}
}

int main()
{
	NhanVien nv[100];
	int n;
	printf("\nNhap so luong nhan vien: ");
	scanf("%d", &n);
	printf("\n\n\t\tNHAP DANH SACH NHAN VIEN\n");
	nhap_Danh_Sach_Nhan_Vien(nv, n);
	printf("\n\n\t\t XUAT DANH SACH SINH VIEN\n");
	xuat_Danh_Sach_Nhan_Vien(nv, n);
	printf("\n\n\t\t NHAN VIEN TUOI NGHI HUU\n");
	tuoi_Nghi_Huu(nv, n);
	printf("\n\n\t\t NHAN VIEN PHONG KE TOAN\n");
	phong_Ke_Toan(nv, n);
}