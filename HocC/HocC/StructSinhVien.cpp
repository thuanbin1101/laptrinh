#include<stdio.h>
#include<string.h>
struct sinhvien
{
	char hoten[30];
	float tongdiem;
	char xeploai[30];
	char masv[30];
	int namsinh;
}; typedef struct sinhvien SinhVien;

void nhap_1_Sinh_Vien(SinhVien& sv)
{
	printf("\nNhap ten: ");
	rewind(stdin);
	gets_s(sv.hoten);
	printf("\nNhap ma sinh vien:");
	rewind(stdin);
	gets_s(sv.masv);
	printf("\nNhap nam sinh:");
	scanf("%d", &sv.namsinh);
	printf("\nNhap Tong diem:");
	scanf("%f", &sv.tongdiem);

	
}

void xuat_1_Sinh_Vien(SinhVien sv)
{
	printf("\nTen: %s", sv.hoten);
	printf("\nMasv: %s", sv.masv);
	printf("\nNam sinh: %d", sv.namsinh);
	printf("\nTong diem: %0.1f", sv.tongdiem);

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
		printf("\n");
	}
}

void xep_Loai_1_Sinh_Vien(SinhVien sv)
{
		if (sv.tongdiem < 6)
		{
			printf("\nXep loai: Kem");
		}
		else if (sv.tongdiem >= 6 && sv.tongdiem < 7)
		{
			printf("\nXep loai: Trung Binh");
		}
		else if (sv.tongdiem >= 7 && sv.tongdiem < 8)
		{
			printf("\nXep loai: Kha");
		}
		else
		{
			printf("\nXep loai: Gioi");
		}
}

void xep_Loai_Danh_Sach_Sinh_Vien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		
		printf("\nXep loai sinh vien thu %d la:  ", i + 1);
		printf("\nTen: %s", sv[i].hoten);
		xep_Loai_1_Sinh_Vien(sv[i]);
		printf("\n");
	}
}

void tong_Diem(SinhVien sv[], int n)
{
	float max = sv[0].tongdiem;
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

void sinh_Vien_Do(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (sv[i].tongdiem >= 17)
		{
			xuat_1_Sinh_Vien(sv[i]);
			printf("\n");
		}
	}
}

void sinh_Vien_Kha(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (sv[i].tongdiem >= 7 && sv[i].tongdiem < 8)
		{
			xuat_1_Sinh_Vien(sv[i]);
		}
	}
}

void sinh_Vien_20_Tuoi_Tro_Xuong(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (2015 - sv[i].namsinh < 20)
		{
			xuat_1_Sinh_Vien(sv[i]);
			printf("\n");
		}
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
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (sv[i].tongdiem < sv[j].tongdiem)
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
	printf("\n\n\t\t XEP LOAI SINH VIEN\n");
	xep_Loai_Danh_Sach_Sinh_Vien(sv, n);
	printf("\n\n\t\t TONG DIEM CAO NHAT\n");
	tong_Diem(sv, n);
	printf("\n\n\t\t SINH VIEN DO\n");
	sinh_Vien_Do(sv, n);
	printf("\n\n\t\t SINH VIEN KHA\n");
	sinh_Vien_Kha(sv, n);	
	printf("\n\n\t\t SINH VIEN DUOI 20 TUOI\n");
	sinh_Vien_20_Tuoi_Tro_Xuong(sv, n);
	printf("\n\n\t\t SAP XEP GIAM DAN THEO DIEM TRUNG BINH\n");
	giam_Dan_DTB(sv, n);
	return 0;
}