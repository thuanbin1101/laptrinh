#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
// tinh thua ke
// khai bao lop cha: class Xe
class Xe
{
protected:
	string ho_ten_nguoi_thue;
	float so_gio_thue;
public:
	void Nhap()
	{
		while (getchar() != '\n'); // xoa bo nho dem trc khi nhap chuoi
		cout << "Nhap ho ten nguoi thue: ";
		getline(cin, ho_ten_nguoi_thue);
		cout << "Nhap so gio thue:";
		cin >> so_gio_thue;
	}
	void Xuat()
	{
		cout << "Ho ten nguoi thue: " << ho_ten_nguoi_thue << endl;
		cout << "So gio thue: " << so_gio_thue << endl;
	}

};

class XeDap :public Xe // class XeMay ke thua lai tu class Xe
{
private:
public:
	float tinh_Tien_Thue_Xe()
	{
		return 10000 + ((so_gio_thue - 1) * 8000);
	}
};

class XeMay :public Xe // class XeMay ke thua lai tu class Xe
{
private:
	int loai_xe;
	string bien_so;
public:
	void Nhap()
	{
		Xe::Nhap();
		cout << "Nhap loai xe can thue (100 - 250 phan khoi): ";
		cin >> loai_xe;
		while (getchar() != '\n'); // xoa bo nho dem trc khi nhap chuoi
		cout << "Nhap bien so: ";
		getline(cin, bien_so);
	}
	void Xuat()
	{
		Xe::Xuat();
		cout << "Loai xe: " << loai_xe << endl;
		cout << "Bien so: " << bien_so << endl;
	}
	float tinh_Tien_Thue_Xe()
	{
		float sum = 0;
		if (loai_xe == 100)
		{
			sum = 150000;
		}
		else
		{
			sum = 200000;
		}
		return sum + ((so_gio_thue - 1) * 100000);
	}
	//GETTER - Loaixe
	int Getter_loaixe()
	{
		return loai_xe;
	}
	void Setter_loaixe(int LoaiXe)
	{
		loai_xe = LoaiXe;
	}
};
void xuat_Tat_Ca_Thong_Tin_Thue_Xe(XeDap ds_xedap[], int n, XeMay ds_xemay[], int m)
{
	int dem = 1;
	cout << "\n\n\t\t DANH SACH THUE XE DAP\n";
	// xuat danh sach xe dap
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n\t\t THONG TIN THUE XE DAP THU " << dem++ << endl;
		ds_xedap[i].Xuat();
		cout << "\nTien thue: " << (size_t)ds_xedap[i].tinh_Tien_Thue_Xe() << endl;
	}

	cout << "\n\n\t\t DANH SACH THUE XE MAY\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\n\n\t\t THONG TIN THUE XE MAY THU " << dem++ << endl;
		ds_xemay[i].Xuat();
		cout << "\nTien thue: " << (size_t)ds_xemay[i].tinh_Tien_Thue_Xe() << endl;
	}
}
float tinh_Tong_Tien_Thue_Xe(XeDap ds_xedap[], int n, XeMay ds_xemay[], int m)
{

	float tong = 0;
	// xuat danh sach xe dap
	for (int i = 0; i < n; i++)
	{
		tong = tong + ds_xedap[i].tinh_Tien_Thue_Xe();
	}


	for (int i = 0; i < m; i++)
	{

		tong = tong + ds_xemay[i].tinh_Tien_Thue_Xe();
	}
	return (size_t)tong;
}
float tinh_Tong_Tien_Thue_Xe_May_250_PK(XeMay ds_xemay[], int m)
{
	float tong = 0;
	for (int i = 0; i < m; i++)
	{
		tong = tong + ds_xemay[i].tinh_Tien_Thue_Xe();
	}
	return (size_t)tong;
}
void Menu(XeDap ds_xedap[], int n, XeMay ds_xemay[], int m)
{
	int luachon;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ====== QUAN LY XE ======";
		cout << "\n\t1. Nhap danh sach thue xe dap va xe may";
		cout << "\n\t2. Xuat tat ca thong tin thue xe";
		cout << "\n\t3. Tinh tong so tien cho thue xe dap va xe may";
		cout << "\n\t4. Xuat tat ca cac thong tin lien quan den viec cho thue xe dap";
		cout << "\n\t5. Tinh tong so tien cho thue xe may loai 250 phan khoi";
		cout << "\n\t0. Ket thuc";
		cout << "\n\n\t\t ============== END ============";
		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon == 0)
		{
			cout << "\nHen gap lai!!!";
			break;
			system("pause");
		}
		else if (luachon == 1)
		{
			int chon;
			while (true)
			{
				system("cls");
				cout << "\n1.Thue xe dap";
				cout << "\n2.Thue xe may";
				cout << "\n0.Thoat";
				cout << "\nBan thue xe gi: ";
				cin >> chon;
				if (chon == 1)
				{
					XeDap x;
					cout << "\n\n\t\t NHAP THONG TIN THUE XE DAP\n";
					x.Nhap();
					ds_xedap[n] = x;
					n++;
					system("pause");
				}
				else if (chon == 2)
				{
					XeMay x;
					cout << "\n\n\t\t NHAP THONG TIN THUE XE MAY\n";
					x.Nhap();
					ds_xemay[m] = x;
					m++;
					system("pause");
				}
				else
				{
					break;
				}
			}

		}
		else if (luachon == 2)
		{
			xuat_Tat_Ca_Thong_Tin_Thue_Xe(ds_xedap, n, ds_xemay, m);
			system("pause");
		}
		else if (luachon == 3)
		{
			cout << "\n\n\t\tTONG TIEN THUE XE: " << tinh_Tong_Tien_Thue_Xe(ds_xedap, n, ds_xemay, m) << endl;
			system("pause");
		}
		else if (luachon == 4)
		{
			cout << "\n\n\t\t DANH SACH THUE XE DAP\n";
			// xuat danh sach xe dap
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t\t THONG TIN THUE XE DAP THU " << i + 1 << endl;
				ds_xedap[i].Xuat();
				cout << "\nTien thue: " << (size_t)ds_xedap[i].tinh_Tien_Thue_Xe() << endl;
			}
			system("pause");
		}
		else if (luachon == 5)
		{
			int dem = 0;
			int tong = 0;
			cout << "\n\n\t\t DANH SACH THUE XE MAY LOAI 250 PHAN KHOI\n";
			for (int i = 0; i < m; i++)
			{
				if (ds_xemay[i].Getter_loaixe() == 250)
				{
					cout << "\n\n\t\t THONG TIN THUE XE MAY THU " << dem++ << endl;
					ds_xemay[i].Xuat();
					cout << "\nTien thue: " << (size_t)ds_xemay[i].tinh_Tien_Thue_Xe() << endl;
				}
			}
			cout << "Tong tien xe may loai 250: " << (size_t)tinh_Tong_Tien_Thue_Xe_May_250_PK(ds_xemay, m);
			system("pause");
		}
	}
}



int main()
{
	XeDap ds_xedap[100];
	int n = 0;
	XeMay ds_xemay[100];
	int m = 0;
	Menu(ds_xedap, n, ds_xemay, m);
	return 0;
}