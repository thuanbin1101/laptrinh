#include<iostream>
#include<string>
#include<fstream> // doc ghi file
using namespace std;

// khai bao lop ngay thang nam sinh
class NamSinh
{
private:
	int ngay;
	int thang;
	int nam;
public:
	//GETTER - SETTER
	int Getter_ngay()
	{
		return ngay;
	}
	void Setter_ngay(int Ngay)
	{
		ngay = Ngay;
	}
	int Getter_thang()
	{
		return thang;
	}
	void Setter_thang(int Thang)
	{
		thang = Thang;
	}
	int Getter_nam()
	{
		return nam;
	}
	void Setter_nam(int Nam)
	{
		nam = Nam;
	}
};

// khai bao lop cha
class NhanVien
{
protected:
	string ma_nv;
	string ho_ten;
	NamSinh nam_sinh;
	string dia_chi;
	float luong_co_ban;
	float he_so_luong;
public:
	virtual void doc_File(ifstream&);
	void Xuat();
};

class NhanVienLapTrinh :public NhanVien
{
private:
	float tien_lam_ngoai_gio;
public:
	void doc_File(ifstream&);
	void Xuat();
};

void NhanVienLapTrinh::doc_File(ifstream& filein)
{
	NhanVien::doc_File(filein);
	filein >> tien_lam_ngoai_gio;
}

class NhanVienThietKe :public NhanVien
{
private:
	float tien_thuong;
public:
	void doc_File(ifstream&);
	void Xuat();
};
void NhanVienThietKe::doc_File(ifstream& filein)
{
	NhanVien::doc_File(filein);
	filein >> tien_thuong;
}

void Menu(NhanVien *ds[] , int n)
{
	int luachon;
	ifstream filein;
	filein.open("NHANVIEN.TXT", ios_base::in);
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ================= MENU ==================";
		cout << "\n1.Doc thong tin nhan vien";
		cout << "\n0.Thoat";
		cout << "\n\n\t\t ===================== END =======================";
		cout << "Nhap lua chon: ";
		cin >> luachon;
		if (luachon == 1)
		{
			filein >> n;
			NhanVien* x;
			for (int i = 0; i < n; i++)
			{
				char c;
				filein >> c;	
				filein.seekg(-1, 1); // dich sang trai 1 byte de ve dau dong
				if (c == 'P')
				{
					x = new NhanVienLapTrinh();
					x->doc_File(filein);
				}
				else if ( c == 'D')
				{
					x = new NhanVienThietKe();
					x->doc_File(filein);
				}
			}
		}
	}
	filein.close();
}
// cai dat cai phuong thuc doc file cua lop cha
void NhanVien::doc_File(ifstream& filein)
{
	getline(filein, ma_nv, ',');
	filein.seekg(1, 1); // dich con tro chi vi cua file tai vi tri hien tai sang ben phai 1 byte.
	getline(filein, ho_ten, ',');
	int ngay;
	filein >> ngay;
	nam_sinh.Setter_ngay(ngay);
	filein.seekg(1, 1);
	int thang;
	filein >> thang;
	nam_sinh.Setter_thang(thang);
	filein.seekg(1, 1);
	int nam;
	filein >> nam;
	nam_sinh.Setter_nam(nam);
	filein.seekg(2, 1);
	getline(filein, dia_chi, ',');
	filein >> he_so_luong;
	filein.seekg(1, 1);
	filein >> luong_co_ban;
	filein.seekg(1, 1);


}
int main()
{
	NhanVien* ds[100];
	int n = 0;
	Menu(ds, n);
	system("pause");
	return 0;
}