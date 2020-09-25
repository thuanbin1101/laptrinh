#include <iostream>
#include <string>
using namespace std;
class sinhvien
{
	// thuoc tinh
private:
	string hoten;
	string maso;
	float diemtoan;
	float diemly;
	// phuong thuc
public:
	void nhap_Thong_Tin();
	void xuat_Thong_Tin();
	// co che dong goi GETTER va SETTER (Dung de pha vo private)
	//GETTER hoten
	string Getter_hoTen()
	{
		return hoten;
	}
	void Setter_hoTen(string HoTen)
	{
		hoten = HoTen;
	}
	float Getter_diemToan()
	{
		return diemtoan;
	}
	void Setter_diemToan(float DiemToan)
	{
		DiemToan = DiemToan;
	}
};

void sinhvien::nhap_Thong_Tin()
{
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap ma so sinh vien: ";
	getline(cin, maso);
	cout << "Nhap diem toan: ";
	cin >> diemtoan;
	cout << "Nhap diem ly: ";
	cin >> diemly;
}
void sinhvien::xuat_Thong_Tin()
{
	cout << "Ho ten: " << hoten << endl;
	cout << "Ma so sinh vien :" << maso << endl;
	cout << "Diem toan: " << diemtoan << endl;
	cout << "Diem ly: " << diemly << endl;
}
int main()
{
	sinhvien nguyenvana;
	cout << "\n\n\t\t NHAP THONG TIN SINH VIEN\n";
	nguyenvana.nhap_Thong_Tin();
	nguyenvana.Setter_hoTen("Nguyen Minh Thuan");
	nguyenvana.Setter_diemToan(8.2);
	cout << "\n\n\t\t XUAT THONG TIN SINH VIEN\n";
	nguyenvana.xuat_Thong_Tin();
	return 0;
}