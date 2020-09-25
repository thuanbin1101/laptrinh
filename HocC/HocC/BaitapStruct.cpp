#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct sinhvien
{
		char hoten[20];
		char maso[30];
		float diem_kithuatlaptrinh;
		float diem_toanroirac;
		float diem_CTDLGT;
	
}; typedef struct sinhvien SINHVIEN;

// hàm nhập thông tin 1 thằng sinh viên
void nhap_Thong_Tin(SINHVIEN &x)
{
	do
	{
		printf("\nNhap ho ten:");
		fgets(x.hoten);
		if (x.hoten.strlen() > 20)
		{t

		}
	}while()
	
	
}