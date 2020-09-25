#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// KHAI BÁO CẤU TRÚC 1 SINH VIÊN
struct sinhvien
{
	char hoten[21];
	char maso[21];
	float diem_KTLT;
	float diem_TRR;
	float diem_CTDLGT;
}; typedef struct sinhvien SinhVien;

// KHAI BAO HÀM NHẬP THÔNG TIN SINH VIÊN
void nhap_Thong_Tin_SinhVien(SinhVien&);

void xuat_Thong_Tin_SinhVien(SinhVien);
// khai báo hàm cắt tên trong chuỗi họ tên
char cat_Ten(SinhVien);


printf("======================= CODE BÊN C++ ==============================")
//#include<iostream>
//using namespace std;
//#include<string>
//
//// khai báo cấu trúc 1 thằng sinh viên
//struct sinhvien
//{
//	string maso;
//	string hoten;
//	float diem_ktlt;
//	float diem_trr;
//	float diem_ctdlgt;
//};
//typedef struct sinhvien SINHVIEN;
//
//// khai báo hàm nhập thông tin sinh viên
//void Nhap_Thong_Tin_Sinh_Vien(SINHVIEN&);
//// khai báo hàm xuất thông tin sinh viên
//void Xuat_Thong_Tin_Sinh_Vien(SINHVIEN);
//// khai báo hàm cắt tên trong chuỗi họ tên
//string Cat_Ten(SINHVIEN);



