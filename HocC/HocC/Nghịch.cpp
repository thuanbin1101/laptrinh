#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct sinhvien
{
	char hoten[30];
	char maso[30];
	int diemtrungbinh;

}; typedef struct sinhvien SINHVIEN;

struct danhsach
{
	SINHVIEN arr[100];
	int n; // so luong sinh vien

}; typedef struct danhsach DANHSACH;


void nhap_Thong_Tin_1_Sinh_Vien(SINHVIEN &sv)
{
	while (getchar() != '\n');
	printf("\nNhap ho ten:");
	gets_s(sv.hoten);
	printf("\nNhap ma so:");
	gets_s(sv.maso);
	printf("\nNhap diem trung binh");
	scanf("%d", &sv.diemtrungbinh);
}

void xuat_Thong_Tin_1_Sinh_Vien(SINHVIEN sv)
{
	printf("\nHo ten sinh vien: %s", sv.hoten);
	printf("\nMa so: %s", sv.maso);
	printf("\nDiem trung binh: %d\n", sv.diemtrungbinh);
}


void nhap_Danh_Sach_Sinh_Vien(DANHSACH &ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printf("\nNhap thong tin sinh vien thu %d", i + 1);
		nhap_Thong_Tin_1_Sinh_Vien(ds.arr[i]);
	}
}

void xuat_Danh_Sach_Sinh_Vien(DANHSACH ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printf("\nXuat thong tin sinh vien thu %d", i + 1);
		xuat_Thong_Tin_1_Sinh_Vien(ds.arr[i]);
	}
}

int DTB_MAX(DANHSACH ds)
{
	int max = ds.arr[0].diemtrungbinh;
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.arr[i].diemtrungbinh > max)
		{
			max = ds.arr[i].diemtrungbinh;
		}
	}
	printf("\nDTB cao nhat: ");
	return max;
}

int DTB_MIN(DANHSACH ds)
{
	int min = ds.arr[0].diemtrungbinh;
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.arr[i].diemtrungbinh < min)
		{
			min = ds.arr[i].diemtrungbinh;
		}
	}
	printf("\nDTB thap nhat: ");
	return min;
}

// Trả về sinh viên có điểm trung bình thấp nhất
void  tim_SV_DTB_MIN(DANHSACH ds)
{
	// BƯỚC 1: DUYỆT DS SINH VIEN VA TIM RA DIEM DTB MIN
	int min = ds.arr[0].diemtrungbinh;
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.arr[i].diemtrungbinh < min)
		{
			min = ds.arr[i].diemtrungbinh;
		}
	}
	// BƯỚC 2 : DUYỆT DS SINH VIÊN NẾU CÓ SV NÀO CÓ DTB = MIN THÌ XUẤT
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.arr[i].diemtrungbinh == min)
		{
			// xuất ra thông tin sinh viên thứ i
			xuat_Thong_Tin_1_Sinh_Vien(ds.arr[i]);
		}
	}
}
int main()
{
	DANHSACH ds;
	printf("\nNhap so luong sinh vien: ");
	scanf("%d", &ds.n);
	printf("\n\n\t\tNHAP THONG TIN SINH VIEN");
	nhap_Danh_Sach_Sinh_Vien(ds);
	printf("\n\n\t\t XUAT THONG TIN SINH VIEN");
	xuat_Danh_Sach_Sinh_Vien(ds);
	printf("%d",DTB_MAX(ds));
	printf("\n\n\t\t SINH VIEN CO DIEM TRUNG BINH THAP NHAT");
	tim_SV_DTB_MIN(ds);
	
}