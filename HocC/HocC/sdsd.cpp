#include<stdio.h>
#include<string.h>
struct sinhvien
{
	char masv[20];
	char hoten[30];
	float tongdiem;
};
typedef struct sinhvien SinhVien;

void nhap_1_Sinh_Vien(SinhVien& sv)
{ 
	printf("\nNhap ma sinh vien: ");
	rewind(stdin);
	gets_s(sv.masv);
	printf("\nNhap ten: ");
	rewind(stdin);
	gets_s(sv.hoten);
	printf("\nNhap tong diem: ");
	scanf("%f", &sv.tongdiem);
}

void xuat_1_Sinh_Vien(SinhVien sv)
{
	printf("\nMaNV: %s", sv.masv);
	printf("\nTen: %s", sv.hoten);
	printf("\nTong diem: %0.1f\n", sv.tongdiem);
}

void nhap_Danh_Sach_Sinh_Vien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nSinh vien %d: ", i + 1);
		nhap_1_Sinh_Vien(sv[i]);
	}
}

void xuat_Danh_Sach_Sinh_Vien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nSinh vien %d: ", i + 1);
		xuat_1_Sinh_Vien(sv[i]);
	}
}

void max(SinhVien sv)
{
	float max = sv.tongdiem;
	if (max < sv.tongdiem)
	{
		max = sv.tongdiem;
	}
}
void cao(SinhVien sv[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 1; j < n; j++)
		{
			max(sv[i]);
		}
		xuat_1_Sinh_Vien(sv[i]);
	}
	
}
//void tong_Diem_Max(SinhVien sv[], int n)
//{
//	float max = sv[0].tongdiem;
//	for (int i = 1; i < n; i++)
//	{
//		if (max < sv[i].tongdiem)
//		{
//			max = sv[i].tongdiem;
//
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (sv[i].tongdiem == max)
//		{
//			xuat_1_Sinh_Vien(sv[i]);
//		}
//	}
//}

int main()
{
	SinhVien sv[100];
	int n;
	printf("\nNhap n:");
	scanf("%d", &n);
	printf("\n\n\t\t DANH SACH SINH VIEN\n");
	nhap_Danh_Sach_Sinh_Vien(sv, n);
	printf("\n\n\t\t XUAT DANH SACH SINH VIEN\n");
	xuat_Danh_Sach_Sinh_Vien(sv, n);
	printf("\n\n\t\t TONG DIEM CAO NHAT\n");
	cao(sv, n);



	

}