#include<iostream>
#include<string>
using namespace std;
struct sinhvien
{
	string hoten;
	string masv;
	int ngaysinh;
	float diem;


}; typedef struct sinhvien SinhVien;

void nhap_1_Sinh_Vien(SinhVien& x)
{
	while (getchar() != '\n'); // rewind(stdin) , fflush(stdin)
	cout << "Nhap ten: ";
	getline(cin, x.hoten);
	cout << "Nhap masv: ";
	getline(cin, x.masv);
	do
	{
		cout << "Nhap ngaysinh: ";
		cin >> x.ngaysinh;
		if (x.ngaysinh < 0 || x.ngaysinh > 31)
		{
			cout << "Ngay sinh khong hop le";
		}
	} while (x.ngaysinh < 0 || x.ngaysinh > 31);

	do
	{
		cout << "Nhap diem: ";
		cin >> x.diem;
		if (x.diem < 0 || x.diem >10)
		{
			cout << "Diem khong hop le";
		}
	} while (x.diem < 0 || x.diem >10);

}
void xuat_1_Sinh_Vien(SinhVien x)
{
	cout << "Ten sinh vien: " << x.hoten << endl;
	cout << "Ma so sinh vien: " << x.masv << endl;
	cout << "Ngay sinh: " << x.ngaysinh << endl;
	cout << "Diem: " << x.diem << endl;
}


void nhap_Danh_Sach_Sinh_Vien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Sinh vien thu " << i + 1 << endl;
		nhap_1_Sinh_Vien(sv[i]);
	}

}

void xuat_Danh_Sach_Sinh_Vien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Sinh vien thu " << i + 1 << endl;
		xuat_1_Sinh_Vien(sv[i]);
		cout << endl;
	}
}
void quy_Doi_Diem_1_Sinh_Vien(SinhVien sv)
{
	if (sv.diem >= 8.5 && sv.diem <= 10)
	{
		cout << "Diem he 4: A";
	}
	else if (sv.diem >= 8 && sv.diem <= 8.4)
	{
		cout << "Diem he 4: B+";
	}
	else if (sv.diem >= 7 && sv.diem <= 7.9)
	{
		cout << "Diem he 4: B";
	}
	else if (sv.diem >= 6.5 && sv.diem <= 6.9)
	{
		cout << "Diem he 4: C+";
	}
	else if (sv.diem >= 5.5 && sv.diem <= 6.4)
	{
		cout << "Diem he 4: C";
	}
	else if (sv.diem >= 5 && sv.diem <= 5.4)
	{
		cout << "Diem he 4: D+";
	}
	else if (sv.diem >= 4.5 && sv.diem <= 4.9)
	{
		cout << "Diem he 4: D";
	}
	else
	{
		cout << "Diem he 4: F";
	}
}
void quy_Doi_Diem_Danh_Sach_Sinh_Vien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		
		cout << "\nSinh vien thu: " << i + 1 << endl;
		cout << "Ten: " << sv[i].hoten << endl;
		cout << "Diem he 10: " << sv[i].diem << endl;
		quy_Doi_Diem_1_Sinh_Vien(sv[i]);
		cout << "\n";

	}
}
int main()
{
	SinhVien sv[100];
	int n;
	cout << " Nhap so luong sinh vien: " << endl;
	cin >> n;
	cout << "\n\n\t\t NHAP DANH SACH SINH VIEN\n";
	nhap_Danh_Sach_Sinh_Vien(sv, n);
	cout << "\n\n\t\t XUAT DANH SACH SINH VIEN \n";
	xuat_Danh_Sach_Sinh_Vien(sv, n);
	cout << "\n\n\t\t QUY DOI DIEM SINH VIEN\n";
	quy_Doi_Diem_Danh_Sach_Sinh_Vien(sv, n);
	return 0;
	
}