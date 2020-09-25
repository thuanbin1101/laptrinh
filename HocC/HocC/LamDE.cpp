#include<stdio.h>
#include<string.h>
void tinh_Tong( int &n)
{
	do
	{
		printf("\nNhap n:");
		scanf("%d", &n);
		if (n <= 5 || n>=100)
		{
			printf("\nNhap lai");
		}
	} while (n <= 5 || n>=100);
	unsigned long long sum = 0;
	unsigned long long gt = 1;
	for (int i = 1; i <= n; i++)
	{
		gt = gt * i;
		sum = sum + gt;
	}
	
	printf("\n%lld", sum);
}

int kiemTraDoiXung(char s[])
// Điều 1 ta thấy: vế trái + vế phải = độ dài - 1 => vế phải = độ dài - 1 - vế trái.
{
	int dodai = strlen(s);
	for (int i = 0; i < dodai; i++)
	{
		if (s[i] != s[dodai - 1 - i])
		{
			return 0; // khong doi xung
		}
	}
	return 1;
}
	
void nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n Nhap phan tu a[%d] = ",i);
		scanf("%d", &a[i]);
	}
}

void xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = %d", i,a[i]);
		
	}
}

int Xoa(int a[], int vitri, int &n)
{
	if (vitri < 0 || vitri >= n)
	{
		return 0; // khong xoa
	}

	for (int i = vitri + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
	//xuat_Mang(a, n);
	return 1; // xoa thanh cong
}

void xoa_Cac_Phan_Tu_Am(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			Xoa(a, i, n);
			i--; // cap nhat lai vi tri cho cac phan tu sau moi lan xoa
		}
	}
	xuat_Mang(a, n);
}

int tim_Kiem_Phan_Tu(int a[], int n, int x)
{
	for (int i = 0 ; i < n; i++)
	{
		if (a[i] == x)
		{
			return i; // tra ve vi tri tim thya
		}
	}
	return -1;
}
int main()
{
	/*char s[100];
	printf("\nNhap chuoi\n");
	rewind(stdin);
	gets_s(s);
	printf("\nXuat chuoi\n");
	printf("\n%s", s);
	printf("\n\n\t\t CHUOI DOI XUNG");
	if (kiemTraDoiXung(s) == 1)
	{
		printf("\nLa chuoi doi xung");
	}
	else
	{
		printf("\nKhong la chuoi doi xung");
	}

	 int n;
	tinh_Tong(n);*/
	int a[100];
	int n;
	do
	{
		printf("\nNhap n:");
		scanf("%d", &n);
		if (n <= 5 || n >= 100)
		{
			printf("\nNhap lai");
		}

	} while (n <= 5 || n >= 100);
	printf("\n\n\t\t NHAP MANG\n");
	nhap_Mang(a, n);
	printf("\n\n\t\t XUAT MANG\n");
	xuat_Mang(a, n);
	int vitri;
	/*printf("\n\n\t\t XOA PHAN TU\n");
	printf("\nNhap vi tri muon xoa:");
	scanf("%d", &vitri);
	int kq = Xoa(a, vitri, n);
	if (kq == 1)
	{
		printf("\n\n");
		printf("\nXoa thanh cong");
		printf("\nMang sau khi xoa:");
		xuat_Mang(a, n);
	}
	else
	{
		printf("\nKhong xoa duoc");
	}*/
	printf("\n\n\t\t XOA TAT CA CAC PHAN TU AM");
	xoa_Cac_Phan_Tu_Am(a, n);
	int x;
	printf("\nNhap so can tim");
	scanf("%d", &x);
	int kq1 = tim_Kiem_Phan_Tu(a, n, x);
	if (kq1 == -1)
	{
		printf("\nKhong tim thay");
	}
	else
	{
		printf("\nPhan tu x tim thay dau dien tai vi tri %d", kq1);
	}
}

