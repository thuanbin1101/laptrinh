#include <iostream>
const int MAX = 1000;
using namespace std;
class Students
{
private:
	char MSSV[20];
	int NgaySinh;
	float Diem;
public:
	void Nhap(Students stu[], int total) {
		for (int i = 0; i < total; i++) {
			cout << "Sinh vien thu " << i + 1 << endl;
			cout << "Ma sinh vien: ";
			fflush(stdin);
			cin >> stu[i].MSSV;
			do {
				cout << "Ngay sinh: ";
				fflush(stdin);
				cin >> stu[i].NgaySinh;
				cout << "Nhap diem: ";
				fflush(stdin);
				cin >> stu[i].Diem;
			} while (stu[i].Diem > 10 || stu[i].NgaySinh > 31);
		}
	}
	void Xuat(Students stu[], int total) {
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "\t" << "MA SINH VIEN" << "\t" << "\t" << "NGAY SINH" << "\t" << "\t" << "DIEM" "\t" << endl;
		for (int i = 0; i < total; i++) {
			cout << "\t" << "\t" << stu[i].MSSV << "\t" << "\t" << stu[i].NgaySinh << "\t" << "\t" << "\t" << stu[i].Diem << endl;
		}
		cout << "-------------------------------------------------------------------------------" << endl;
	}
	void DiemHe4(Students stu[], int total) {
		cout << "--------------------------DIEM HE SO 4 DANG CHU--------------------------------" << endl;
		for (int i = 0; i < total; i++) {
			if (stu[i].Diem >= 8.5 && stu[i].Diem <= 10) {
				cout << "Ma sinh vien: " << stu[i].MSSV << "\t" << "Diem: " << "\t" << "A" << endl;
			}
			else if (stu[i].Diem >= 8 && stu[i].Diem <= 8.4) {
				cout << "Ma sinh vien: " << stu[i].MSSV << "\t" << "Diem: " << "\t" << "B+" << endl;
			}
			if (stu[i].Diem >= 7 && stu[i].Diem <= 7.9) {
				cout << "Ma sinh vien: " << stu[i].MSSV << "\t" << "Diem: " << "\t" << "B" << endl;
			}
			if (stu[i].Diem >= 6.5 && stu[i].Diem <= 6.9) {
				cout << "Ma sinh vien: " << stu[i].MSSV << "\t" << "Diem: " << "\t" << "C+" << endl;
			}
			if (stu[i].Diem >= 5.5 && stu[i].Diem <= 6.4) {
				cout << "Ma sinh vien: " << stu[i].MSSV << "\t" << "Diem: " << "\t" << "C" << endl;
			}
			if (stu[i].Diem >= 5 && stu[i].Diem <= 5.4) {
				cout << "Ma sinh vien: " << stu[i].MSSV << "\t" << "Diem: " << "\t" << "D+" << endl;
			}
			if (stu[i].Diem >= 4 && stu[i].Diem <= 4.9) {
				cout << "Ma sinh vien: " << stu[i].MSSV << "\t" << "Diem: " << "\t" << "D" << endl;
			}
			else if (stu[i].Diem < 4) {
				cout << "Ma sinh vien: " << stu[i].MSSV << "\t" << "Diem: " << "\t" << "F" << endl;
			}
		}
	}
};
int main() {
	Students stu[MAX];
	Students st;
	int total;
	cout << "--------------------------THONG TIN SINH VIEN----------------------------------" << endl;
	cout << "Nhap so sinh vien: ";
	cin >> total;
	st.Nhap(stu, total);
	st.Xuat(stu, total);
	st.DiemHe4(stu, total);
	cout << "-------------------------------------------------------------------------------" << endl;
}