#include<stdio.h>


// MAng 1 chieu
void nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d] =");
		scanf("%d", &a[i]);
	}
}
void xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = %d",i,a[i]);
		
	}
}


void nhap_Mang(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("\nNhap a[%d][%d] = ", i, j);
			scanf("%d", a[i][j]);
		}
		
	}
}

void nhap_Mang(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("%5d", a[i][j]);
			
		}
		printf("\n");
	}
}

struct sinhvien {
	char hoten[30];
	float tongdiem;

}; typedef struct sinhvien SinhVien;

void nhap_1_Sinh_Vien(SinhVien sv)
{
	printf("\nNhap ten:");
	rewind(stdin);
	gets_s(sv.hoten);
	printf("\nNhap diem:");
	scanf("%f", sv.tongdiem);
}
void xuat_1_Sinh_Vien(SinhVien sv)
{
	printf("\nTen: %s", sv.hoten);
	printf("\nTong diem :%f", sv.tongdiem);
}


void nhap_DSSV(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		nhap_1_Sinh_Vien(sv[i]);
	}
}

void xuat_DSSV(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		xuat_1_Sinh_Vien(sv[i]);
	}
}

void 
{
	for(int i=0;i<n;i++)
	if(sv.)
	{ }
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
}