#include<stdio.h>
#include<string.h>
struct sinhvien
{
	char hoten[30];
	int namsinh;
	float diemtrungbinh;
}; typedef struct sinhvien SinhVien;

void nhap_1_Sinh_Vien(SinhVien& sv)
{
	printf("\nNhap ten: ");
	rewind(stdin);
	gets_s(sv.hoten);
	printf("\nNhap nam sinh: ");
	scanf("%d", &sv.namsinh);
	printf("\nNhap diem trung binh: ");
	scanf("%f", &sv.diemtrungbinh);
}

void xuat_1_Sinh_Vien(SinhVien sv)
{
	printf("\nTen: %s", sv.hoten);
	printf("\nNam sinh: %d", sv.namsinh);
	printf("\nDiem trung binh: %0.1f\n", sv.diemtrungbinh);
}

void nhap_Danh_Sach_Sinh_Vien(SinhVien sv[],int n)
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

void hoan_Vi(SinhVien& x, SinhVien& y)
{
	SinhVien temp = x;
	x = y;
	y = temp;
}
void giam_Dan_DTB(SinhVien sv[], int n)
{
	for (int i = 0; i < n - 1 ; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sv[i].diemtrungbinh < sv[j].diemtrungbinh)
			{
				hoan_Vi(sv[i], sv[j]);
			}
		}
	}
	xuat_Danh_Sach_Sinh_Vien(sv, n);
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
	printf("\n\n\t\t SAP XEP DIEM TRUNG BINH GIAM DAN\n");
	giam_Dan_DTB(sv, n);

}