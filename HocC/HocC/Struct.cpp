#include<iostream>
using namespace std;
#include<string>

struct sinhvien
{
	string hoten;
	string mssv;
	float diem;
};

typedef struct sinhvien SinhVien;
void nhap_Thong_Tin_1_Sinh_Vien(SinhVien &sv)
{
	fflush(stdin); 
	cout << "\nNhap ten cua sinh vien:";
	getline(cin, sv.hoten);

	fflush(stdin);
	cout << "\nNhap ma so sinh vien: ";
	getline(cin, sv.mssv);

	cout << "\nNhap diem :";
	cin >> sv.diem;

}

void xuat_Thong_Tin_Sinh_Vien(SinhVien sv)
{
	
	cout << "\n Ten cua sinh vien: " << sv.hoten;
	

	
	cout << "\n Ma so sinh vien: " << sv.mssv;


	cout << "\n Diem :" << sv.diem;
	

}

int main()
{
	SinhVien x; // khai bao 1 sinh vien x
	cout << "===================NHAP THONG TIN SINH VIEN====================" << endl;
	nhap_Thong_Tin_1_Sinh_Vien(x);
	cout << "\n\n\t\tTHONG TIN SINH VIEN\n ";
	xuat_Thong_Tin_Sinh_Vien(x);
	return 0;
}
 