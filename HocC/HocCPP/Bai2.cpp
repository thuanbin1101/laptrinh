#include <iostream>
#include <string>
using namespace std;

void nhap_Mang(int* a, int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "Nhap a[" << i << "]" << "[" << j << "]" << " = ";
			cin >> *(a+i*cot+j);
		}
	}
}

void xuat_Mang(int *a,int dong,int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << *(a + i * cot + j) << "\t";
		}
		cout << "\n";
	}
}
void hoan_Vi(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void sap_Xep_Tang_Dan(int* a, int dong, int cot) {
	int lg = dong * cot;
	for (int i = 0; i < lg - 1; i++) {
		for (int j = i + 1; j < lg; j++) {
			if (*(a + i) > * (a + j)) {
				hoan_Vi(*(a + i), *(a + j));
			}
		}
	}
	xuat_Mang(a, dong, cot);
}
int main()
{
	int dong, cot;
	do
	{
		cout << "nhap so hang: ";
		cin >> dong;
		cout << "nhap so cot: ";
		cin >> cot;
		if (dong <= 0 || cot <= 0)
		{
			cout << "Khong hop le , dong va cot phai > 0";
		}
	} while (dong <= 0 || cot <= 0);
	int* a = new int[dong * cot]; //cấp phát xong
//khởi tạo bằng 0
	for (int i = 0; i < dong; i++)
		for (int j = 0; j < cot; j++)
			a[i * cot + j] = 0;
	
	
	cout << "\n\n\t\t NHAP PHAN TU MANG 2 CHIEU\n";
	nhap_Mang(a, dong, cot);
	cout << "\n\n\t\t XUAT MANG 2 CHIEU\n";
	xuat_Mang(a, dong, cot);
	cout << "\n\n\t\t SAP XEP MANG 2 CHIEU TANG DAN\n";
	sap_Xep_Tang_Dan(a, dong, cot);
	delete[]a;
	return 0;
}