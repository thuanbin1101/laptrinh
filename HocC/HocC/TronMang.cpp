#include<iostream>
using namespace std;

// hàm nhập mảng
void Nhap_Mang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << " ] = ";
		cin >> *(a + i);
	}
}

// hàm xuất mảng
void Xuat_Mang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(a + i) << "  ";
	}
}

// hàm thêm 1 phần tử x vào vị trí vt trong mảng
void Them(int*& a, int& n, int x, int vt)
{
	for (int i = n - 1; i >= vt; i--)
	{
		*(a + i + 1) = *(a + i);
	}
	*(a + vt) = x;
	n++;
}

// hàm xóa 1 phần tử tại vị trí vt trong mảng
void Xoa(int*& a, int& n, int vt)
{
	for (int i = vt + 1; i < n; i++)
	{
		*(a + i - 1) = *(a + i);
	}
	n--;
}

// 1 2 2 3 1 4 5
void Xoa_Cac_Phan_Tu_Trung_Nhau(int*& a, int& n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (*(a + i) == *(a + j))
			{
				// BƯỚC 1: XÓA
				Xoa(a, n, j);
				j--;
				// BƯỚC 2: THU HẸP VÙNG NHỚ BAN ĐẦU
				int* tam = new int[n];
				for (int j = 0; j < n; j++)
				{
					*(tam + j) = *(a + j);
				}
				delete[] a;
				a = new int[n];
				for (int j = 0; j < n; j++)
				{
					*(a + j) = *(tam + j);
				}
				delete[] tam;

			}
		}
	}
}


// Khởi tạo mảng 1 chiều động
int main()
{
	int* a = NULL;
	int* b = NULL;
	int n;
	int m;
	cout << "\nNhap so luong phan tu mang a: ";
	cin >> n;
	a = new int[n]; // cấp phát vùng nhớ động có n ô nhớ bên HEAP <=> mảng 1 chiều động

	cout << "\n\n\t\t NHAP MANG a\n";
	Nhap_Mang(a, n);
	cout << "\n\n\t\t XUAT MANG a\n";
	Xuat_Mang(a, n);

	cout << "\nNhap so luong phan tu mang b: ";
	cin >> m;
	b = new int[m];	// cấp phát vùng nhớ động có m ô nhớ bên HEAP <=> mảng 1 chiều động
	cout << "\n\n\t\t NHAP MANG b\n";
	Nhap_Mang(b, m);
	cout << "\n\n\t\t XUAT MANG b\n";
	Xuat_Mang(b, m);

	int* c = NULL;
	int k = 0;
	c = new int[n + m];
	// bỏ hết tất cả phần tử mảng a vào mảng c
	for (int i = 0; i < n; i++)
	{
		c[k] = a[i];
		k++;
	}
	// bỏ hết tất cả phần tử mảng b vào mảng c
	for (int i = 0; i < m; i++)
	{
		c[k] = b[i];
		k++;
	}

	cout << "\n\n\t\t XUAT MANG c\n";
	Xuat_Mang(c, k);
	delete[] a; // giải phóng vùng nhớ mảng động cho biến con trỏ
	system("pause");
	return 0;
}