#include"DanhSachSinhVien.h"

void nhap_Danh_Sach_Sinh_Vien(DanhSach &ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printf("\nSinh vien thu %d", i + 1);
		nhap_Thong_Tin_SinhVien(ds.dssv[i]);
	}
}

void xuat_Danh_Sach_Sinh_Vien(DanhSach ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printf("\nSinh vien thu %d", i + 1);
		xuat_Thong_Tin_SinhVien(ds.dssv[i]);
		
	}
}

void sap_Xep_Giam_Dan_Theo_Ten(DanhSach& dssv)
{
	for (int i = 0; i < dssv.n - 1; i++)
	{
		for (int j = i + 1; j < dssv.n; j++)
		{
			// Tên của thằng dssv.ds[i] mà nhỏ hơn tên của thằng dssv.ds[j] ===> hoán vị 
			if(dssv.ds)
		}
	}

	
}

//printf("======================== CODE BÊN C++ ===========================")
//#include"DanhSachSinhVien.h"
//// cài đặt hàm nhập danh sách sinh viên
//void Nhap_Danh_Sach_Sinh_Vien(DANHSACH& ds)
//{
//	for (int i = 0; i < ds.n; i++)
//	{
//		cout << "\n\n\t\t NHAP THONG TIN SINH VIEN THU " << i + 1;
//		Nhap_Thong_Tin_Sinh_Vien(ds.dssv[i]);
//	}
//}
//// cài đặt hàm xuất danh sách sinh viên
//void Xuat_Danh_Sach_Sinh_Vien(DANHSACH ds)
//{
//	for (int i = 0; i < ds.n; i++)
//	{
//		cout << "\n\n\t\t THONG TIN SINH VIEN THU " << i + 1;
//		Xuat_Thong_Tin_Sinh_Vien(ds.dssv[i]);
//	}
//}
//
//// cài đặt hàm sắp xếp danh sách sinh viên giảm dần theo tên
//void Sap_Xep_Giam_Dan_Theo_Ten(DANHSACH& dssv)
//{
//	for (int i = 0; i < dssv.n - 1; i++)
//	{
//		for (int j = i + 1; j < dssv.n; j++)
//		{
//			// tên của thằng dssv.ds[i]  mà nhỏ hơn tên của thằng dssv.ds[j] ==> hoán vị 
//			// cắt tên trong chuỗi họ tên
//			string hoten_i = Cat_Ten(dssv.dssv[i]);
//			string hoten_j = Cat_Ten(dssv.dssv[j]);
//			if (strcmp((char*)hoten_i.c_str(), (char*)hoten_j.c_str()) < 0)
//			{
//				SINHVIEN tam;
//				tam = dssv.dssv[i];
//				dssv.dssv[i] = dssv.dssv[j];
//				dssv.dssv[j] = tam;
//			}
//		}
//	}
//}