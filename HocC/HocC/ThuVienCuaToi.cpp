#include"ThuVienCuaToi.h" // gọi lại thư viện bên thuviencuatoi.h

int tinhTong(int a, int b)
{
	return a + b;
}
int LIET_KE_CAC_SO_CHINH_PHUONG_TRONG_DOAN_CHO_TRUOC(int m, int n)
{
	printf("\nNhap m < n\n");
	scanf("%d%d", &m, &n);
	if (m >= 0 && m < n)
	{
		int start = sqrt(m);
		start = (start * start == m) ? start : start + 1;
		int end = sqrt(n);
		int i;
		for (i = start; i <= end; i++)
		{
			printf("%d, ", i * i);
		}
	}
	else
	{
		printf("\nNhap 2 so tu nhien m<n");
	}
return 0;
}
void PHAN_TICH_1_SO_THANH_TICH_CAC_THUA_SO_NGUYEN_TO(int n)
{
	int n;
	scanf("%d", &n);
	int i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			printf("%d", i);

			if (n != i)
			{
				printf("x");
			}
			n = n / i;
		}
		else
		{
			i++;
		}
	}
}
void PHAN_TICH_1_SO_THANH_TICH_CAC_THUA_SO_NGUYEN_TO_DANG_MU(int n)
{
	unsigned int n;
	unsigned i = 2;
	printf("Nhap so duong n: ");
	scanf("%d", &n);

	if (n < 1) {
		printf("Nhap n > 0");
	}
	else if (n == 1) {
		printf("1 = 2^0");
	}
	else {
		printf("%d = ", n);
		int count = 0;
		while (n > 1) {
			if (n % i == 0) {
				count++;
				if (n == i) {
					printf("%d^%d", i, count);
				}
				n /= i;
			}
			else {
				if (count > 0) {
					printf("%d^%dx", i, count);
					count = 0;
				}
				i++;
			}
		}
	}

}
void Tong_Cac_Phan_Tu_Tren_Moi_Hang_Cua_Mang(int a[][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		int sum = 0;
		for (int j = 0; j < cot; j++)
		{
			sum = sum + a[i][j];
		}
		printf("\nTong cac phan tu tren hang %d : %d", i, sum);
	}


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
void kiem_Tra_So_Doi_Xung(int n)
{
	int i;
	int temp = n;
	int sodaonguoc = 0;
	while (temp > 0)
	{
		sodaonguoc = sodaonguoc * 10 + (temp % 10);
		temp = temp / 10;
	}
	printf("So dao nguoc la: %d\n", sodaonguoc);
	if (sodaonguoc == n)
		printf("%d la so doi xung!\n", n);
	else
		printf("%d khong phai la so doi xung!\n", n);
}
void cac_Chu_So_Tang_Dan_Tu_Trai_Sang_Phai(int n)
{
	bool CheckTangDan = true;
	int i;
	int ChuSoCuoi = n % 10; // lay chu so o cuoi
	int temp = n / 10;
	printf("\n%d co phai la so tang dan tu trai sang phai khong\n", n);
	while (temp != 0)
	{
		int ChuSoKeCuoi = temp % 10;
		temp = temp / 10;
		if (ChuSoCuoi < ChuSoKeCuoi)
		{
			CheckTangDan = false;
			break;
		}
		else
		{
			ChuSoCuoi = ChuSoKeCuoi;
		}
	}
	if (CheckTangDan == true)
	{
		printf("\nDung!");
	}
	else
	{
		printf("\nSai");
	}
}
//=========================== HÀM TÌM UCLN,BCNN TRONG MANG ============================//
int UCLN(int x, int y)
{
	while (x != y)
	{
		if (x < y)
		{
			y = y - x;
		}
		else if (x > y)
		{
			x = x - y;
		}
	}
	return x;
}

int tim_UCLN_Trong_Mang(int a[], int n)
{
	int x = a[0];
	for (int i = 1; i < n; i++)
	{
		x = UCLN(x, a[i]);
	}
	return x;
}

int BCNN(int x, int y)
{
	return (x * y) / UCLN(x, y);
}

int tim_BCNN_Trong_Mang(int a[], int n)
{
	int x = a[0];
	for (int i = 1; i < n; i++)
	{
		x = BCNN(x, a[i]);
	}
	return x;
}

//======================================== END ===================================================//

bool KT_So_Amstrong(int n)
{
	int k = 0;
	int tam = n;
	while (n != 0)
	{
		n = n / 10;
		k++;
	}
	n = tam;
	int tong = 0;
	while (n != 0)
	{
		tong = tong + pow((n % 10), k);
		n = n / 10;
	}
	if (tam == tong)
	{
		return true;
	}
	else
	{
		return false;
	}
}