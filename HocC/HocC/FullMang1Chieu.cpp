#include<stdio.h>
#include<stdlib.h>
void nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = %d", i, a[i]);
	}
}

void tong_cac_So_Am(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			sum = sum + a[i];
		}
	}
	printf("\nTong cac so am la : %d", sum);
}

void tong_cac_So_Duong(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			sum = sum + a[i];
		}
	}
	printf("\nTong cac so duong la : %d", sum);
}

void cac_So_Chia_Het_Cho_6_Tan_Cung_Bang_2(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 6 == 0 && a[i] % 10 == 2)
		{
			printf("%8d", a[i]);
		}
	}
}


void trung_Binh_Cong_Cac_So_Duong_Va_Chia_Het_Cho_3(int a[], int n)
{
	int sum = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] % 3 == 0)
		{
			sum = sum + a[i];
			dem++;
		}
	}
	float ketqua = (float)sum / dem;
	printf("\nKet qua = %0.1f", ketqua);
}

void min(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("\nPhan tu nho nhat la: %d", min);
}

void max(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("\nPhan tu lon nhat la: %d", max);
}

void trung_Binh_Cong_So_Chan(int a[], int n)
{
	int sum = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum = sum + a[i];
			dem++;
		}
	}
	float ketqua = (float)sum / dem;
	printf("\nKet qua = %0.1f", ketqua);
}

void trung_Binh_Cong_So_Le(int a[], int n)
{
	int sum = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			sum = sum + a[i];
			dem++;
		}
	}
	float ketqua = (float)sum / dem;
	printf("\nKet qua = %0.1f", ketqua);
}

void hoan_Vi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void sap_Xep_Mang_Tang_Dan(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				hoan_Vi(a[i], a[j]);
			}
		}
	}
	xuat_Mang(a, n);
}


void tong_Cac_So_Khong_Am(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			sum = sum + a[i];
		}
	}
	printf("\nKet qua = %d", sum);
}

void dem_Cac_So_Le(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			dem++;
		}
	}
	printf("\nCo tat ca %d so le", dem);
}


void tong_Cac_Phan_Tu_Co_So_Tan_Cung_Bang_6(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 10 == 6)
		{
			sum = sum + a[i];
		}
	}
	printf("\nKet qua = %d", sum);
}
int main()
{
	int a[100];
	int n;
	printf("\nNhap so luong phan tu : ");
	scanf("%d", &n);
	printf("\n\n\t\tNHAP MANG 1 CHIEU\n");
	nhap_Mang(a, n);
	printf("\n\n\t\tXUAT MANG 1 CHIEU\n");
	xuat_Mang(a, n);
	printf("\n\n\t\tTONG CAC SO AM\n");
	tong_cac_So_Am(a, n);
	printf("\n\n\t\tTONG CAC SO DUONG\n");
	tong_cac_So_Duong(a, n);
	printf("\n\n\t\tCAC SO CHIA HET CHO 6 VA TAN CUNG BANG 2\n");
	cac_So_Chia_Het_Cho_6_Tan_Cung_Bang_2(a, n);
	printf("\n\n\t\tTRUNG BINH CONG CAC SO DUONG VA CHIA HET CHO 3\n");
	trung_Binh_Cong_Cac_So_Duong_Va_Chia_Het_Cho_3(a, n);
	printf("\n\n\t\tPHAN TU NHO NHAT\n");
	min(a, n);
	printf("\n\n\t\tPHAN TU LON NHAT\n");
	max(a, n);
	printf("\n\n\t\tTRUNG BINH CONG SO CHAN\n");
	trung_Binh_Cong_So_Chan(a, n);
	printf("\n\n\t\tTRUNG BINH CONG SO LE\n");
	trung_Binh_Cong_So_Le(a, n);
	printf("\n\n\t\tSAP XEP MANG TANG DAN\n");
	sap_Xep_Mang_Tang_Dan(a, n);
	printf("\n\n\t\tTONG CAC SO KHONG AM\n");
	tong_Cac_So_Khong_Am(a, n);
	printf("\n\n\t\tDEM CAC SO LE\n");
	dem_Cac_So_Le(a, n);
	printf("\n\n\t\tTONG CAC PHAN TU CO SO TAN CUNG LA 6\n");
	tong_Cac_Phan_Tu_Co_So_Tan_Cung_Bang_6(a, n);
	
	
}