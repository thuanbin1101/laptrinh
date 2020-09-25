#include<stdio.h>
#include <stdlib.h>
void nhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n Nhap phan tu a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" %d  ", a[i]);
	}
}

bool kiemTraSNT(int n)
{
	bool KT = true;

	if (n < 2)
	{
		KT = false;
	}
	else
	{
		for (int j = 2; j < n; j++)
		{
			if (n % j == 0)
			{
				KT = false;
			}		break;
		}
	}
	return KT;
}

void xuatCacSNT(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		// KIEM TRA TUNG PHAN TU a[i]
		if (kiemTraSNT(a[i]) == true)
		{
			printf("%d  ", a[i]);
		}

	}

}


void xuatCacSoSNT(int a[], int n)
{


	for (int i = 0; i < n; i++)
	{
		bool KT = true;
		int tam = a[i]; // CHO BIEN TAM GIU GIA TRI CUA a[i]
		while (tam > 0)
		{

			if (kiemTraSNT(tam) == true)
			{
				tam = tam / 10; // LOAI BO CHU SO BEN PHAI DE TIEP TUC KIEM TRA ( 7331=>>>733)..
			}
			else
			{
				KT = false;
				break; // DUNG KIEM TRA VA RA NGOAI KET LUAN.
			}

		}
		// SAU KHI THOAT KHOI VONG LAP WHILE ===> KIEM TRA LAI BIEN KT.
		if (KT == true)
		{
			printf("%d ", a[i]);
		}
	}

}


//  HAM CO NHIEM VU THEM 1 PHAN TU X VAO VI TRI k BAT KI TRONG MANG.
void Them(int a[], int& n, int x, int k) // n can phai la tham chieu.
{
	for (int i = n - 1; i >= k; i--)	
	{
		a[i + 1] = a[i];
	}
	a[k] = x; // GAN PHAN TU can them x vao vi tri k
	n++; // so luong phan tu mang tang len 1 don vi
}

// HAM CO NHIEM VU XOA 1 PHAN TU X VAO VI TRI k BAT KI TRONG MANG.
void Xoa(int a[], int& n, int k) // n can phai la tham chieu 
{
	for (int i = k + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}

	n--;
}

// HAM SAP XEP MANG TANG DAN.
void sapXepMangTangDan(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

// HAM LIET KE CAC PHAN TU TRONG MANG CO CHU SO DAU TIEN LA SO CHAN.
bool kiemTraChuSoChan(int x)
{
	while (x >= 10)
	{
		x = x / 10;
	}
	if (x % 2 != 0)
	{
		return false;
	}
	return true;
}

void lietKePhanTu(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemTraChuSoChan(a[i]) == true)
		{
			printf("%d  ", a[i]);
		}
	}

}

// HAM DEM XEM X XUAT HIEN BAO NHIEU LAN TRONG MANG.
int soLanXuatHienxTrongMang(int a[], int n, int x)
{

	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			dem++;
		}

	}
	return dem;
}

// HAM TIM GIA TRI CHAN DAU TIEN TRONG MANG.
void tim_Gia_Tri_Chan_Dau_Tien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%d  ", a[i]);
			break; // neu tim kiem thay phan tu chan dau tien thi khong can tim nua ===> thoat khoi vong lap.
		}
	}
}

// HAM KIEM TRA MANG CO TON TAI PHAN TU LA SO NGUYEN TO HAY KHONG,NEU TON TAI TRA VE 1 , NGUOC LAI TRA VE 0.
bool kiem_Tra_So_Nguyen_To(int x)
{
	if (x < 2)
	{
		return false; // x ko phai so nguyen to.
	}
	else // x>=2
	{
		if (x % 2 == 0) // x la so chan ( SNT la so le )
		{
			return false;
		}
		else
		{
			for (int i = 2; i < x; i++)
			{
				if (x % i == 0)
				{
					return false;
					break;
				}
			}
		}
	}

	return true; // x la so nguyen to.
}
bool kiem_Tra_Mang(int a[], int n)
{
	bool KT = false;
	for (int i = 0; i < n; i++)
	{
		if (kiem_Tra_So_Nguyen_To(a[i]) == true)
		{
			return true;
			break;
		}
	}
	return KT;
}

bool kiem_Tra_Chu_So_Dau(int x)
{
	// tách từng chữ số của số nguyên x cho đến khi lấy được chữ số đầu
	while (x >= 10)
	{
		x = x / 10;
	}
	if (x % 2 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
float TBC_Co_Chu_So_Dau_La_Le(int a[], int n)
{
	int sum = 0;
	int dem = 0;
	int ketqua = 0;
	for (int i = 0; i < n; i++)
	{
		if(kiem_Tra_Chu_So_Dau(a[i]) == true)
		{
			sum = sum + a[i];
			dem++;
		}
		else
		{
			exit(a[i]);
		}
	}
	ketqua = (float)sum / dem;
	return ketqua;
}

int main()
{
	int x;
	int a[100];
	int n;
	do
	{
		printf("Nhap phan tu mang n:");
		scanf("%d", &n);
		if (n <= 0 || n > 100)
			printf("\nKhong hop le n phai lon hon 0 va nho hon 100\n");
	} while (n <= 0 || n > 100);
	printf("\n\n\tNHAP MANG\n");
	nhapMang(a, n);
	printf("\n\n\tXUAT MANG\n");
	xuatMang(a, n);
	//if (kiem_Tra_Mang(a, n) == true)
	//{
	//	printf("\n Mang co ton tai phan tu la so nguyen to");
	//}
	//else
	//{
	//	printf("\n Mang khong ton tai so nguyen to ");
	//}
	//printf("\n \tTIM GIA TRI CHAN DAU TIEN\n ");
	//tim_Gia_Tri_Chan_Dau_Tien(a, n);
	//printf("\n\n\tCAC SO NGUYEN TO\n");
	//xuatCacSNT(a, n);
	//printf("\n\n \tCAC SO SIEU NGUYEN TO\n");
	//xuatCacSoSNT(a, n);
	//printf("\n==============================================================\n");
	//// GIA TRI CAN THEM VAO MANG
	//printf("\n Nhap gia tri can them: ");
	//scanf("%d", &x);
	//int vitri;
	//do
	//{
	//	printf("\n Nhap vi tri can them: ");
	//	scanf("%d", &vitri);
	//	if (vitri > n || vitri < 0)
	//		printf("\n vi tri phai nho hon so luong phan tu n");
	//} while (vitri > n || vitri < 0);

	//Them(a, n, x, vitri);
	//printf("\n MANG SAU KHI THEM ");
	//xuatMang(a, n);

	//printf("\n==============================================================\n");
	//// XOA 1 PHAN TU:
	//do
	//{
	//	printf("\n Nhap vi tri can xoa: ");
	//	scanf("%d", &vitri);
	//	if (vitri<0 || vitri>n)
	//		printf("\n vi tri phai nho hon so luong phan tu n");
	//} while (vitri<0 || vitri > n);
	//Xoa(a, n, vitri);
	//printf("\n MANG SAU KHI XOA");
	//xuatMang(a, n);
	//printf("\n=================================================================\n");
	//printf("\nSAP XEP MANG TANG DAN");
	//sapXepMangTangDan(a, n);
	//xuatMang(a, n);
	//printf("\n=====================================================================\n");
	//printf("\n PHAN TU CO CHU SO DAU TIEN LA SO CHAN:\n");
	//lietKePhanTu(a, n);
	//printf("\n===================================================================\n");
	//printf("\n DEM SO LUONG PHAN TU x XUAT HIEN TRONG MANG ");
	//printf("\n Nhap gia tri x: ");
	//scanf("%d", &x);
	//soLanXuatHienxTrongMang(a, n, x);
	//printf("\n So lan x xuat hien trong mang la %d", soLanXuatHienxTrongMang(a, n, x));
	printf("\nTRUNG BINH CONG CAC PHAN TU CO CHU SO DAU TIEN LA SO LE\n");
	printf("%f", TBC_Co_Chu_So_Dau_La_Le(a, n));








}

