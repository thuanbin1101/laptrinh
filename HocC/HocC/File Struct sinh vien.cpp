#include<iostream>
using namespace std;
#include<fstream>
#include<string>
#include<vector>
#pragma warning(disable:4996)

// khai báo cấu trúc môn học
struct monhoc
{
	string tenmonhoc;
	float diem;
};
typedef struct monhoc MonHoc;

// khai báo cấu trúc sinh viên
struct sinhvien
{
	string hoten;
	string maso;
	string namsinh;
	vector< MonHoc> ds_monhoc;// mảng 1 chiều các môn học của sinh viên
};
typedef struct sinhvien SinhVien;

// hàm đọc file thông tin của 1 thằng sinh viên
void Doc_File_Thong_Tin_Sinh_Vien(ifstream &filein, SinhVien &sv)
{
	getline(filein, sv.hoten, ','); // đọc dữ liệu đến dấu ','
	getline(filein, sv.maso, ','); // đọc dữ liệu đến dấu ','
	getline(filein, sv.namsinh); // đọc dữ liệu đến dấu ','
}

// hàm đọc file thông tin của 1 môn học
void Doc_File_Thong_Tin_Mon_Hoc(ifstream &filein, MonHoc &mon)
{
	getline(filein, mon.tenmonhoc, '-'); // đọc dữ liệu đến dấu '-'
	filein >> mon.diem; // đọc điểm từ file
}

// hàm đọc thông tin sinh viên và danh sách môn học tương ứng
void doc_File(ifstream& filein, vector<SinhVien>& ds_sinhvien)
{
	// vong lap lap den cuoi file
	while (filein.eof() == false)
	{
		SinhVien sv; // khai bao ra sinh viên để nhận dữ liệu từ file về
		// Buoc 1: đọc thông tin của 1 sinh viên
		Doc_File_Thong_Tin_Sinh_Vien(filein, sv);
		//Bước 2: đọc số lượng môn học mà sinh viên đã học
		int n; // số lượng môn học
		filein >> n; // đọc dữ liệu là số lượng môn học 
		//Bước 3: đọc danh sách các môn học mà sinh viên đã học
		for (int i = 1; i <= n; i++)
		{
			MonHoc mon; // khai bao mon
			Doc_File_Thong_Tin_Mon_Hoc(filein, mon);
			sv.ds_monhoc.push_back(mon); // them mot mon hoc vao cuoi mang vector danh sach mon hoc cua thang sinh vien tuong ung
		}
		// Bước 4: Thêm thông tin sinh viên vào mảng 1 chiều vector sinh viên - danh sách sinh viên 
		ds_sinhvien.push_back(sv); // them sinh viên vào cuối mảng
	}	
}

// ham xuat thong tin cua 1 sinh vien
void xuat_Thong_Tin_Sinh_Vien(SinhVien sv)
{
	cout << "\nHo ten:" << sv.hoten;
	cout << "\nMa so:" << sv.maso;
	cout << "\nNgay thang nam sinh:" << sv.namsinh;
}

// ham xuat thong tin cua 1 mon hoc
void xuat_Mon_Hoc(MonHoc mon)
{
	cout << "\nTen mon:" << mon.tenmonhoc;
	cout << "\nDiem:" << mon.diem;
}
// hàm test 
void Test(vector<SinhVien> ds)
{
	for (int i = 0; i < ds.size(); i++)
	{
		cout << "\n\n\t\t SINH VIEN THU " << i + 1;
		// goi ham xuat thong tin cua sinh vien
		xuat_Thong_Tin_Sinh_Vien(ds[i]);
		cout << "\n====== DANH SACH MON HOC TUONG UNG ======\n";
		//xuat ra danh sach cac mon hoc cua thang sinh vien thu i tuong uong
		for (int j = 0; j < ds[i].ds_monhoc.size(); j++)
		{
			cout << "\n\n\t\tMON HOC THU " << j + 1;
			xuat_Mon_Hoc(ds[i].ds_monhoc[j]);
		}

	}
}

int main()
{
	ifstream filein;
	filein.open("SINHVIEN.TXT", ios_base::in);
	// khai bao danh sach sinh vien
	vector<SinhVien> ds_sinhvien;
	// doc tat ca du lieu tu file sinh vien.txt
	doc_File(filein, ds_sinhvien);
	// xuat du lieu ra man hinh
	Test(ds_sinhvien);
	filein.close();
	return 0;
}