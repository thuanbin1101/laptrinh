#include"ThongTinSinhVien.h"
	
// Cài đặt hàm thông tin sinh viên
void nhap_Thong_Tin_SinhVien(SinhVien& x)
{
	
	do
	{
		rewind(stdin);
		printf("\nNhap ho ten sinh vien:");
		gets_s(x.hoten);
		if (strlen(x.hoten) > 20)
		{
			printf("\nHo ten sinh vien khong hop le");
		}
	} while (strlen(x.hoten) > 20);

	do
	{
		printf("\nNhap ma so sinh vien:");
		gets_s(x.maso);
		if (strlen(x.maso) > 20)
		{
			printf("\nHo ten sinh vien khong hop le");
		}
	} while (strlen(x.maso) > 20);

	do
	{
		printf("\nNhap diem KTLT:");
		scanf("%f", &x.diem_KTLT);
		if (x.diem_KTLT < 0 || x.diem_KTLT > 10)
		{
			printf("\nDIEM PHAI >0 VA <10");
		}
	} while (x.diem_KTLT < 0 || x.diem_KTLT > 10);

	do
	{
		printf("\nNhap diem TRR:");
		scanf("%f", &x.diem_TRR);
		if (x.diem_TRR < 0 || x.diem_TRR > 10)
		{
			printf("\nDIEM PHAI >0 VA <10");
		}
	} while (x.diem_TRR < 0 || x.diem_TRR > 10);

	do
	{
		printf("\nNhap diem CTDLGT:");
		scanf("%f", &x.diem_CTDLGT);
		if (x.diem_CTDLGT < 0 || x.diem_CTDLGT > 10)
		{
			printf("\nDIEM PHAI >0 VA <10");
		}
	} while (x.diem_CTDLGT < 0 || x.diem_CTDLGT > 10);

	

	
}

void xuat_Thong_Tin_SinhVien(SinhVien x)
{
		printf("\nHo ten sinh vien: %s", x.hoten);
		printf("\nMa so sinh vien: %s", x.maso);
		printf("\n Diem KTLT %f", x.diem_KTLT);
		printf("\n Diem TRR %f", x.diem_TRR);
		printf("\n Diem CTDLGT %f", x.diem_CTDLGT);
}

char cat_Ten(SinhVien sv)
{
	for (int i = strlen(sv.hoten) - 1 ; i >= 0; i--)
	{
		if (sv.hoten[i] == ' ')
		{
			return sv.hoten;
		}
	}
}



printf("=========================== CODE BÊN C++ ============================")
//#include"ThongTinSinhVien.h"
//
//// cài đặt hàm nhập thông tin sinh viên
//void Nhap_Thong_Tin_Sinh_Vien(SINHVIEN& sv)
//{
//	do
//	{
//		rewind(stdin); // xóa bộ nhớ đệm
//		cout << "\nNhap vao ma so sinh vien: ";
//		getline(cin, sv.maso);
//		if (sv.maso.length() > 20)
//		{
//			cout << "\nMa so sinh vien khong hop le";
//		}
//	} while (sv.maso.length() > 20);
//	do
//	{
//		cout << "\nNhap vao ho ten sinh vien: ";
//		getline(cin, sv.hoten);
//		if (sv.hoten.length() > 30)
//		{
//			cout << "\nHo ten sinh vien khong hop le";
//		}
//	} while (sv.hoten.length() > 30);
//
//	do
//	{
//		cout << "\nNhap diem Ki thuat lap trinh:  ";
//		cin >> sv.diem_ktlt;
//		if (sv.diem_ktlt < 0 || sv.diem_ktlt > 10)
//		{
//			cout << "\nDiem sinh vien khong hop le. ";
//		}
//	} while (sv.diem_ktlt < 0 || sv.diem_ktlt > 10);
//
//	do
//	{
//		cout << "\nNhap diem Toan roi rac:  ";
//		cin >> sv.diem_trr;
//		if (sv.diem_trr < 0 || sv.diem_trr > 10)
//		{
//			cout << "\nDiem sinh vien khong hop le. ";
//		}
//	} while (sv.diem_trr < 0 || sv.diem_trr > 10);
//
//	do
//	{
//		cout << "\nNhap diem Cau truc du lieu va giai thuat:  ";
//		cin >> sv.diem_ctdlgt;
//		if (sv.diem_ctdlgt < 0 || sv.diem_ctdlgt > 10)
//		{
//			cout << "\nDiem sinh vien khong hop le. ";
//		}
//	} while (sv.diem_ctdlgt < 0 || sv.diem_ctdlgt > 10);
//
//}
//
//// cài đặt hàm xuất thông tin sinh viên
//void Xuat_Thong_Tin_Sinh_Vien(SINHVIEN sv)
//{
//	cout << "\nMa so sinh vien: " << sv.maso;
//	cout << "\nHo ten sinh vien: " << sv.hoten;
//	cout << "\nDiem Ki thuat lap trinh: " << sv.diem_ktlt;
//	cout << "\nDiem Toan roi rac: " << sv.diem_trr;
//	cout << "\nDiem Cau truc du lieu va gia thuat: " << sv.diem_ctdlgt;
//}
//
//// hàm cắt tên
//string Cat_Ten(SINHVIEN sv)
//{
//	for (int i = sv.hoten.length() - 1; i >= 0; i--)
//	{
//		// nếu gặp kí tự khoảng trắng thì bắt đầu cắt
//		if (sv.hoten[i] == ' ')
//		{
//			return sv.hoten.substr(i + 1); // bắt đầu cắt tại vị trí i + 1 về cuối chuỗi
//		}
//	}
//	return "";
//}