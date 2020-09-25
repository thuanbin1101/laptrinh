#include<stdio.h>
#include<string.h>
struct sinhvien
{
	char hoten[30];
	float tongdiem;
	char masinhvien[10];
}; typedef struct sinhvien SinhVien;

void nhap_1_Sinh_Vien(SinhVien& sv)
{
	printf("\nNhap ten: ");
	rewind(stdin);
	gets_s(sv.hoten);
	printf("\nNhap ma sinh vien: ");
	rewind(stdin);
	gets_s(sv.masinhvien);
	printf("\nNhap Tong diem:");
	scanf("%f", &sv.tongdiem);
}

void xuat_1_Sinh_Vien(SinhVien sv)
{
	printf("\nTen: %s", sv.hoten);
	printf("\nMa sinh vien: %s", sv.masinhvien);
	printf("\nTong diem: %0.1f\n", sv.tongdiem);
}

void nhap_Danh_Sach_Sinh_Vien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nSinh vien %d:", i + 1);
		nhap_1_Sinh_Vien(sv[i]);
	}
}

void xuat_Danh_Sach_Sinh_Vien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nSinh vien %d:", i + 1);
		xuat_1_Sinh_Vien(sv[i]);
	}
}

void tong_Diem(SinhVien sv[],int n)
{
	float max = sv[0].tongdiem;
	int index = 0;
	for (int i = 1; i < n; i++)
	{
		if (max < sv[i].tongdiem)
		{
			max = sv[i].tongdiem;
			
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (sv[i].tongdiem == max)
		{
			xuat_1_Sinh_Vien(sv[i]);
		}
	}
}

void sinh_Vien_Do(SinhVien sv)
{
	if (sv.tongdiem >= 17)
	{
		xuat_1_Sinh_Vien(sv);
		printf("\nDo");
	}
	else
	{
		xuat_1_Sinh_Vien(sv);
		printf("\nTruot");
	}
}

void danh_Sach_Sinh_Vien_Do(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		

		sinh_Vien_Do(sv[i]);
	}
}
int main()
{
	SinhVien sv[100];
	int n;
	printf("\nNhap so luong sinh vien :");
	scanf("%d", &n);
	printf("\n\n\t\t NHAP DANH SACH SINH VIEN\n");
	nhap_Danh_Sach_Sinh_Vien(sv, n);
	printf("\n\n\t\t XUAT DANH SACH SINH VIEN\n");
	xuat_Danh_Sach_Sinh_Vien(sv, n);
	printf("\n\n\t\t SINH VIEN CO TONG DIEM LON NHAT\n");
	tong_Diem(sv, n);
	printf("\n\n\t\t DANH SACH SINH VIEN DO\n");
	danh_Sach_Sinh_Vien_Do(sv, n);
}