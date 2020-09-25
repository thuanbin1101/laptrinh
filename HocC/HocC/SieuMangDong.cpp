#include<iostream>
using namespace std;


// hàm nhập mảng
void Nhap_Mang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "]= ";
		cin >> a[i]; // <=> *(a + i)
	}
}

// hàm xuất mảng
void Xuat_Mang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

// TẠO HÀM TƯƠNG TỰ realloc bên C
void Cap_Phat_Lai_Vung_Nho(int*& a, int vung_nho_moi, int vung_nho_cu)
{
	// Bước 1: Tạo mảng phụ temp chứa các phần tử của mảng a
	int* temp = new int[vung_nho_cu];
	for (int i = 0; i < vung_nho_cu; i++)
	{
		temp[i] = a[i]; // bỏ lần lượt các phần tử của mảng a sang cho mảng temp
	}
	// Bước 2: giải phóng vùng nhớ cũ của a đi trước
	delete[] a;
	// Bước 3: Cấp phát lại vùng nhớ mới cho a dựa vào vung_nho_moi
	a = new int[vung_nho_moi]; // cấp phát lại vùng nhớ cho mảng a với số lượng phần tử mảng là vung_nho_moi
	// Bước 4: Đổ tất cả các phần tử của mảng temp về lại cho mảng a
	for (int i = 0; i < vung_nho_cu; i++)
	{
		a[i] = temp[i];
	}
	delete[] temp; // giải phóng vùng nhớ temp khi không cần
}

// hàm menu - xử lý tất cả các yêu cầu bài toán
void Menu(int*& a, int n)
{
	int luachon;
	while (true)
	{
		system("cls"); // xóa màn hình trước đó
		cout << "\n\n\t\t =========== MENU ===========";
		cout << "\n1. Nhap phan tu cho mang";
		cout << "\n2. Xuat mang";
		cout << "\n0. Ket thuc chuong trinh";
		cout << "\n\n\t\t ===========  END ===========";

		cout << "\nNhap vao lua chon: ";
		cin >> luachon;

		switch (luachon)
		{
		case 0:
		{
			return; // kết thúc hàm
		}break;
		case 1:
		{
			int x;
			cout << "\nNhap phan tu: ";
			cin >> x;
			// kĩ thuật siêu mảng động
			if (n == 0)
			{
				a = new int; // cấp phát 1 ô nhớ cho mảng
			}
			else
			{
				Cap_Phat_Lai_Vung_Nho(a, n + 1, n); // trước khi thêm vào mảng động thì sẽ nới rộng ra 1 ô nhớ
			}
			a[n] = x; // thêm giá trị vào vị trí cuối mảng
			n++; // số lượng phần tử mảng tăng lên
		}break;
		case 2:
		{
			cout << "\n\n\t\t XUAT MANG\n";
			Xuat_Mang(a, n);
			system("pause");
		}break;
		}

	}
}

int main()
{
	int* a = NULL; // con trỏ a sẽ quản lí cái mảng động của chúng ta, đầu tiên cho con trỏ trỏ đến vùng nhớ NULL <=> chưa cấp phát vùng nhớ cho con trỏ
	int n = 0; // số lượng phần tử của mảng
	Menu(a, n); // gọi lại hàm menu xư lý các yêu cầu của chương trình

	delete[] a; // giải phóng vùng nhớ cho mảng con trỏ a
	system("pause");
	return 0;
}