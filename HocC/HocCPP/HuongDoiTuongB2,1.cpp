// 18/9/2020
#include<iostream>
#include <string>
using namespace std;
// khai bao cau truc class CHA
class NhanVien
{
protected:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_gio_sua;
public:
	void Nhap();
	void Xuat();
};

void NhanVien::Nhap()
{
	while (getchar() != '\n');
	cout << "Nhap Ho ten:";
	getline(cin, hoten);
	cout << "Nhap tuoi:";
	cin >> tuoi;
	cout << "Nhap gioi tinh: ";
	rewind(stdin);
	getline(cin, gioi_tinh);
	cout << "Nhap dia chi: ";
	getline(cin, dia_chi);
	cout << "Nhap SDT: ";
	getline(cin, sdt);
	cout << "Nhap chieu cao: ";
	cin >> chieu_cao;
	cout << "Nhap can nang: ";
	cin >> can_nang;

}
void NhanVien::Xuat()
{
	cout << "Ho ten:" << hoten << endl;
	cout << "Tuoi:" << tuoi << endl;
	cout << "Gioi tinh: " << gioi_tinh << endl;
	cout << "Dia chi: " << dia_chi << endl;
	cout << "SDT: " << sdt << endl;
	cout << "Chieu cao: " << chieu_cao << endl;
	cout << "Can nang: " << can_nang << endl;
}
// ke thua	
class nhan_Vien_Sua_Ong_Nuoc :public NhanVien
{
private:
	float so_gio_sua;
public:
	void Nhap();
	void Xuat();
	double tinh_Luong();


	nhan_Vien_Sua_Ong_Nuoc();
	~nhan_Vien_Sua_Ong_Nuoc();




};
void nhan_Vien_Sua_Ong_Nuoc::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so gio sua: ";
	cin >> so_gio_sua;
}
void nhan_Vien_Sua_Ong_Nuoc::Xuat()
{
	NhanVien::Xuat();
	cout << "So gio sua: " << so_gio_sua << endl;
	cout << "Tien luong: " << (size_t)tinh_Luong();
}
// ham tinh tien luong
double nhan_Vien_Sua_Ong_Nuoc::tinh_Luong()
{
	return so_gio_sua * 50000;
}
// ham tao
nhan_Vien_Sua_Ong_Nuoc::nhan_Vien_Sua_Ong_Nuoc()
{

}
// ham huy
nhan_Vien_Sua_Ong_Nuoc::~nhan_Vien_Sua_Ong_Nuoc()
{

}


class nhan_Vien_Giao_Hang :public NhanVien
{
private:

	int so_hang;

public:
	void Nhap();
	void Xuat();
	float tinh_Luong();

	nhan_Vien_Giao_Hang();
	~nhan_Vien_Giao_Hang();




};
void nhan_Vien_Giao_Hang::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so hang giao: ";
	cin >> so_hang;
}
void nhan_Vien_Giao_Hang::Xuat()
{
	NhanVien::Xuat();
	cout << "So hang giao: " << so_hang << endl;
	cout << "Tien luong: " << (size_t)tinh_Luong();
}
float nhan_Vien_Giao_Hang::tinh_Luong()
{
	return so_hang * 33500;
}
// ham tao
nhan_Vien_Giao_Hang::nhan_Vien_Giao_Hang()
{

}
// ham huy
nhan_Vien_Giao_Hang::~nhan_Vien_Giao_Hang()
{

}


class nhan_Vien_Xe_Om :public NhanVien
{
private:

	float so_km;
public:
	void Nhap();
	void Xuat();
	float tinh_Luong();

	nhan_Vien_Xe_Om();
	~nhan_Vien_Xe_Om();




};
void nhan_Vien_Xe_Om::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so km: ";
	cin >> so_km;
}
void nhan_Vien_Xe_Om::Xuat()
{
	NhanVien::Xuat();
	cout << "So km: " << so_km << endl;
	cout << "Tien luong: " << (size_t)tinh_Luong();
}
float nhan_Vien_Xe_Om::tinh_Luong()
{
	return so_km * 10000;
}
// ham tao
nhan_Vien_Xe_Om::nhan_Vien_Xe_Om()
{

}
// ham huy
nhan_Vien_Xe_Om::~nhan_Vien_Xe_Om()
{

}
// ham tinh tong tien luong cua cac nhan vien sua ong nuoc
double tong_Tien_Luong_NV_Sua_Ong_Nuoc(nhan_Vien_Sua_Ong_Nuoc* ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + ds[i]->tinh_Luong();
	}
	return sum;
}
double tong_Tien_Luong_NV_Giao_Hang(nhan_Vien_Giao_Hang* ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + ds[i]->tinh_Luong();
	}
	return sum;
}
double tong_Tien_Luong_NV_Xe_Om(nhan_Vien_Xe_Om* ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + ds[i]->tinh_Luong();
	}
	return sum;
}
// ham sap xep giam dan theo luong
void hoan_Vi_Sua_Ong_Nuoc(nhan_Vien_Sua_Ong_Nuoc* x, nhan_Vien_Sua_Ong_Nuoc* y)
{
	nhan_Vien_Sua_Ong_Nuoc* temp;
	temp = x;
	x = y;
	y = temp;
}
void hoan_Vi_Giao_Hang(nhan_Vien_Giao_Hang* x, nhan_Vien_Giao_Hang* y)
{
	nhan_Vien_Giao_Hang* temp;
	temp = x;
	x = y;
	y = temp;
}
void hoan_Vi_Xe_Om(nhan_Vien_Xe_Om* x, nhan_Vien_Xe_Om* y)
{
	nhan_Vien_Xe_Om* temp;
	temp = x;
	x = y;
	y = temp;
}
void sap_Xep_Danh_Sach_Nhan_Vien_Sua_Ong_Nuoc_Giam_Dan_Luong(nhan_Vien_Sua_Ong_Nuoc* ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i]->tinh_Luong() < ds[j]->tinh_Luong())
			{
				hoan_Vi_Sua_Ong_Nuoc(ds[i], ds[j]);
			}
		}
	}
}
void sap_Xep_Danh_Sach_Nhan_Vien_Giao_Hang_Giam_Dan_Luong(nhan_Vien_Giao_Hang* ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i]->tinh_Luong() < ds[j]->tinh_Luong())
			{
				hoan_Vi_Giao_Hang(ds[i], ds[j]);
			}
		}
	}
}
void sap_Xep_Danh_Sach_Nhan_Vien_Xe_Om_Giam_Dan_Luong(nhan_Vien_Xe_Om* ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i]->tinh_Luong() < ds[j]->tinh_Luong())
			{
				hoan_Vi_Xe_Om(ds[i], ds[j]);
			}
		}
	}
}

void Menu(nhan_Vien_Sua_Ong_Nuoc* ds_nv_sua_ong_nuoc[], nhan_Vien_Giao_Hang* ds_nv_giao_hang[], nhan_Vien_Xe_Om* ds_nv_xe_om[], int n, int m, int l)
{
	int luachon;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ====== CHUONG TRINH QUAN LY NHAN VIEN ========";
		cout << "\n1.Nhap thong tin nhan vien sua ong nuoc";
		cout << "\n2.Nhap thong tin nhan vien giao hang";
		cout << "\n3.Nhap thong tin nhan vien xe om";
		cout << "\n4.Xuat danh sach thong tin nhan vien sua ong nuoc";
		cout << "\n5.Xuat danh sach thong tin nhan vien giao hang";
		cout << "\n6.Xuat danh sach thong tin nhan vien xe om";
		cout << "\n7.Tong tien luong cua 3 loai nhan vien";
		cout << "\n8.Sap xep danh sach cac loai nhan vien giam dan theo luong";

		cout << "\n0.Thoat";

		cout << "\n\n\t\t======= END ========";
		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon < 0 || luachon > 8)
		{
			cout << "\nLua chon khong hop le, xin kiem tra lai\n";
			system("pause");
		}
		else if (luachon == 0)
		{
			cout << "\nHen gap lai!!!\n";
			break;
			system("pause");
		}
		else if (luachon == 1)
		{
			nhan_Vien_Sua_Ong_Nuoc* nv_sua_ong_nuoc = new nhan_Vien_Sua_Ong_Nuoc(); // day la doi tuong con tro
			cout << "\n\n\t\t Nhap thong tin nhan vien sua ong nuoc \n";
			nv_sua_ong_nuoc->Nhap();

			// them doi tuong con tro "nv_sua_ong_nuoc" vao danh sach con tro "ds_nv_sua_ong_nuoc".
			ds_nv_sua_ong_nuoc[n] = nv_sua_ong_nuoc;
			n++;
		}
		else if (luachon == 2)
		{
			nhan_Vien_Giao_Hang* nv_giao_hang = new nhan_Vien_Giao_Hang(); // day la doi tuong gia tri
			cout << "\n\n\t\t Nhap thong tin nhan vien giao hang \n";
			nv_giao_hang->Nhap();

			// them doi tuong gia tri "nv_giao_hang" vao danh sach "ds_nv_giao_hang".
			ds_nv_giao_hang[m] = nv_giao_hang;
			m++;
		}
		else if (luachon == 3)
		{
			nhan_Vien_Xe_Om* nv_xe_om = new nhan_Vien_Xe_Om(); // day la doi tuong gia tri
			cout << "\n\n\t\t Nhap thong tin nhan vien xe om \n";
			nv_xe_om->Nhap();

			// them doi tuong gia tri "nv_xe_om" vao danh sach "ds_nv_xe_om".
			ds_nv_xe_om[l] = nv_xe_om;
			l++;
		}
		else if (luachon == 4)
		{
			cout << "\n\n\t\t DANH SACH NHAN VIEN SUA ONG NUOC\n";
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t\t THONG TIN NHAN VIEN SUA ONG NUOC THU " << i + 1 << endl;
				ds_nv_sua_ong_nuoc[i]->Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)tong_Tien_Luong_NV_Sua_Ong_Nuoc(ds_nv_sua_ong_nuoc, n);
			system("pause");
		}
		else if (luachon == 5)
		{
			cout << "\n\n\t\t DANH SACH NHAN VIEN GIAO HANG\n";
			for (int i = 0; i < m; i++)
			{
				cout << "\n\n\t\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1 << endl;
				ds_nv_giao_hang[i]->Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)tong_Tien_Luong_NV_Giao_Hang(ds_nv_giao_hang, m);
			system("pause");
		}
		else if (luachon == 6)
		{
			cout << "\n\n\t\t DANH SACH NHAN VIEN XE OM\n";
			for (int i = 0; i < l; i++)
			{
				cout << "\n\n\t\t THONG TIN NHAN VIEN XE OM THU " << i + 1 << endl;
				ds_nv_xe_om[i]->Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)tong_Tien_Luong_NV_Xe_Om(ds_nv_xe_om, l);
			system("pause");
		}
		else if (luachon == 7)
		{
			cout << "\n\n\t\t TONG TIEN CONG TY CAN TRA HANG THANG\n" << (size_t)tong_Tien_Luong_NV_Sua_Ong_Nuoc(ds_nv_sua_ong_nuoc, n) + tong_Tien_Luong_NV_Giao_Hang(ds_nv_giao_hang, m) + tong_Tien_Luong_NV_Xe_Om(ds_nv_xe_om, l) << endl;
			system("pause");
		}
		else if (luachon == 8)
		{
			cout << "\n\n\t\tDANH SACH GIAM DAN LUONG NHAN VIEN SUA ONG NUOC\n";
			sap_Xep_Danh_Sach_Nhan_Vien_Sua_Ong_Nuoc_Giam_Dan_Luong(ds_nv_sua_ong_nuoc, n);
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t\t THONG TIN NHAN VIEN SUA ONG NUOC THU " << i + 1 << endl;
				ds_nv_sua_ong_nuoc[i]->Xuat();
			}
			cout << "\n\n\t\tDANH SACH GIAM DAN LUONG NHAN VIEN GIAO HANG\n";
			sap_Xep_Danh_Sach_Nhan_Vien_Giao_Hang_Giam_Dan_Luong(ds_nv_giao_hang, m);
			for (int i = 0; i < m; i++)
			{
				cout << "\n\n\t\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1 << endl;
				ds_nv_giao_hang[i]->Xuat();
			}
			cout << "\n\n\t\tDANH SACH GIAM DAN LUONG NHAN VIEN XE OM\n";
			sap_Xep_Danh_Sach_Nhan_Vien_Xe_Om_Giam_Dan_Luong(ds_nv_xe_om, l);
			for (int i = 0; i < l; i++)
			{
				cout << "\n\n\t\t THONG TIN NHAN VIEN XE OM THU " << i + 1 << endl;
				ds_nv_xe_om[i]->Xuat();
			}
			system("pause");
		}
	}
	// giai phong cac doi tuong con tro cho danh sach nhan vien sua ong nuoc
	for (int i = 0; i < n; i++)
	{
		delete ds_nv_sua_ong_nuoc[i];
	}
	for (int i = 0; i < m; i++)
	{
		delete ds_nv_giao_hang[i];
	}
	for (int i = 0; i < l; i++)
	{
		delete ds_nv_giao_hang[i];
	}

}

int main()
{
	// khai bao mang 
	nhan_Vien_Sua_Ong_Nuoc* ds_sua_ong_nuoc[100];
	nhan_Vien_Giao_Hang* ds_giao_hang[100];
	nhan_Vien_Xe_Om* ds_xe_om[100];
	int n = 0; // so luong nhan vien sua ong nuoc
	int m = 0; // so luong nhan vien giao hang	
	int l = 0; // so luong nhan vien xe om
	Menu(ds_sua_ong_nuoc, ds_giao_hang, ds_xe_om, n, m, l);


	return 0;
}