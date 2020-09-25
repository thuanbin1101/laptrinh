============================ = KĨ THUẬT CHIA TÁCH FILE TRONG NGÔN NGỮ LẬP TRÌNH C / C++ ============================ =
Yêu cầu :
-Các bạn phải nắm vững các kiến thức cơ bản của lập trình C / C++
+ câu lệnh điều kiện
+ vòng lặp
+ hàm
......................

TRONG CHƯƠNG TRÌNH SẼ CÓ 2 FILE
1. file có đuôi.h - hay còn gọi là file thư viện
+ file thư viện do ngôn ngữ lập trình tạo ra sẵn - và chúng ta sẽ gọi để dùng
- stdio.h: file thư viện hỗ trợ việc nhập xuất chuẩn
- conio.h :
	-math.h : file thư viện hỗ trợ các hàm toán học : sqrt(), pow(), sin(), cos().....
	- string.h : file thư viện hỗ trợ các hàm thao tác trên chuỗi : strlen(), strcpy()....
	..........
	+ file thư viện do người lập trình tạo nên
	==> đáp ứng 1 số công việc nào đó cho người lập trình viên
	file.h

	KẾT LUẬN : file.h sẽ là file chứa các KHAI BÁO của các cái hàm


	2. file có đuôi.cpp
	==> file.cpp sẽ là file chứa các ĐỊNH NGHĨA của các hàm ở trong file.h



VD:
thuviencuatoi.h - file này chứa các khai báo hàm mà chúng ta sẽ dùng
- KHAI BÁO hàm kiểm tra số nguyên tố
bool Kiem_Tra_So_Nguyen_To(int n);
-KHAI BÁO hàm kiểm tra số hoàn thiện
bool Kiem_Tra_So_Hoan_Thien(int n);
-KHAI BÁO hàm giải phương trình bậc 2
void Gia_Phuong_Trinh_Bac_2(float a, float b, float c);

==================
thuviencuatoi.cpp - định nghĩa các hàm đã khai báo trong file thuviencuatoi.h




==================== thuviencuatoi.h ====================
#include<iostream> // khai báo thư viện có sẵn hỗ trợ việc nhập xuất căn bản
using namespace std;
#include<math.h> // #include<cmath>

// khai báo hàm kiểm tra số nguyên tố
bool Kiem_Tra_So_Nguyen_To(int n);

// khai báo hàm kiểm tra số hoàn thiện
bool Kiem_Tra_So_Hoan_Thien(int n);

// khai báo hàm giải phương trình bậc 2
void Giai_Phuong_Trinh_Bac_2(float a, float b, float c);

==================== thuviencuatoi.cpp ====================
#include"thuviencuatoi.h" // gọi lại thư viện bên file .h



// định nghĩa hàm kiểm tra số nguyên tố
// trả về true nếu n là số nguyên tố
bool Kiem_Tra_So_Nguyen_To(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		if (n == 2)
		{
			return true;
		}
		else
		{
			if (n % 2 == 0)
			{
				return false;
			}
			else
			{
				for (int i = 2; i < n; i++)
				{
					if (n % i == 0)
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}

// định nghĩa hàm giải phương trình bậc 2 
// ax^2 + bx + c = 0
void Giai_Phuong_Trinh_Bac_2(float a, float b, float c)
{
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "\nPhuong trinh co vo so nghiem";
			}
			else
			{
				cout << "\nPhuong trinh vo nghiem";
			}
		}
		else
		{
			cout << "\nPhuong co nghiem: " << -c / b;
		}
	}
	else
	{
		float delta = (b * b) - (4 * a * c);
		if (delta == 0)
		{
			cout << "\nPhuong trinh co nghiem kep: " << -b / (2 * a);
		}
		else if (delta < 0)
		{
			cout << "\nPhuong trinh vo nghiem";
		}
		else
		{
			cout << "\nPhuong trinh co 2 nghiem phan biet: ";
			cout << "\nx1 = " << (-b + sqrt(delta)) / (2 * a);
			cout << "\nx2 = " << (-b - sqrt(delta)) / (2 * a);
		}

	}
}

// định nghĩa hàm kiểm tra số hoàn thiện
bool Kiem_Tra_So_Hoan_Thien(int n)
{
	int sum = 1;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		return true;
	}
	return false;
}

================ = main.cpp ================ =
// gọi lại thư viện do chúng ta định nghĩa
#include"thuviencuatoi.h"

// giải phương trình bậc 2


int main()
{
	Giai_Phuong_Trinh_Bac_2(1, 4, 5);

	system("pause");
	return 0;
}