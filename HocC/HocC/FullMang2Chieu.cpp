#include<stdio.h>
#include<stdlib.h>
void nhap_Mang(int a[100][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("\nNhap a[%d][%d] = ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat_Mang(int a[100][100], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
int tong_Cac_Phan_Tu_Co_So_Tan_Cung_La_6(int a[][100], int dong, int cot)
{
	int sum = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] % 10 == 6)
			{
				sum = sum + a[i][j];
			}
		}
	}
	return sum;
}

void max(int a[][100], int dong, int cot)
{
	int max = a[0][0];
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (max < a[i][j])
				max = a[i][j];
		}	
	}
	printf("\nPhan tu max = %d", max);
}

void dem_So_Chan_Chia_Het_Cho_3(int a[][100], int dong, int cot)
{
	int dem = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] % 3 == 0 && a[i][j] % 2 == 0)
			{
				dem++;
			}
		}
	}
	printf("\nCo tat ca %d so chan chia het cho 3", dem);
}

void tong_Phan_Tu_Hang_2(int a[][100], int dong, int cot)
{
	int sum = 0;
	for (int j = 0; j < cot; j++)
	{
		sum = sum + a[1][j];
	}
	printf("\nKet qua = %d", sum);
}

void trung_Binh_Cong_Cac_Phan_Tu_Tren_Cot_2(int a[][100], int dong, int cot)
{
	int sum = 0;
	int dem = 0;
	for (int i = 0; i < dong; i++)
	{
		sum = sum + a[i][1];
		dem++;
	}
	float ketqua = 1.0 * sum  / dem;
	printf("\nKet qua = %0.1f", ketqua);
}

void cac_Phan_Tu_Tren_Duong_Cheo_Chinh(int a[][100], int dong, int cot)
{
	printf("\nCac phan tu tren duong cheo chinh: ");
	for (int i = 0; i < dong; i++)
	{
		printf("%5d", a[i][i]);
	}
}

void cac_Phan_Tu_Tren_Duong_Cheo_Phu(int a[][100], int dong, int cot)
{
	printf("\nCac phan tu tren duong cheo phu: ");
	for (int i = 0; i < dong; i++)
	{
			printf("%5d", a[i][cot-i-1]);
	}
}

void tong_Cac_Phan_Tu_Tren_Duong_Cheo_Phu(int a[][100], int dong, int cot)
{
	int sum = 0;
	for (int i = 0; i < dong; i++)
	{
		 sum = sum + a[i][cot - i - 1];
	}
	printf("\nTong = %d", sum);
}

void tong_Cac_Phan_Tu_Tren_Duong_Cheo_Chinh(int a[][100], int dong, int cot)
{
	int sum = 0;
	for (int i = 0; i < dong; i++)
	{
		sum = sum + a[i][i];
	}
	printf("\nTong = %d", sum);
}
int main()
{
	int a[100][100];
	int dong;
	int cot;
	printf("\nNhap dong: ");
	scanf("%d", &dong);
	printf("\nNhap cot: ");
	scanf("%d", &cot);
	printf("\n\n\t\tNHAP MANG 2 CHIEU");
	nhap_Mang(a, dong, cot);
	printf("\n\n\t\tXUAT MANG\n");
	xuat_Mang(a, dong, cot);
	printf("\n\n\t\tTONG CAC PHAN TU CO SO TAN CUNG LA 6\n");
	printf("%d", tong_Cac_Phan_Tu_Co_So_Tan_Cung_La_6(a, dong, cot));
	printf("\n\n\t\tPHAN TU MAX\n");
	max(a, dong, cot);
	printf("\n\n\t\tTAT CA SO CHAN CHIA HET CHO 3\n");
	dem_So_Chan_Chia_Het_Cho_3(a, dong, cot);
	printf("\n\n\t\tTONG CAC PHAN TU O HANG 2\n ");
	tong_Phan_Tu_Hang_2(a, dong, cot);
	printf("\n\n\t\tTRUNG BINH CONG CAC PHAN TU TREN COT 2\n");
	trung_Binh_Cong_Cac_Phan_Tu_Tren_Cot_2(a, dong, cot);
	printf("\n\n\t\tTONG CAC PHAN TU TREN DUONG CHEO CHINH\n");
	cac_Phan_Tu_Tren_Duong_Cheo_Chinh(a, dong, cot);
	tong_Cac_Phan_Tu_Tren_Duong_Cheo_Chinh(a, dong, cot);
	printf("\n\n\t\tTONG CAC PHAN TU TREN DUONG CHEO PHU\n");
	cac_Phan_Tu_Tren_Duong_Cheo_Phu(a, dong, cot);
	tong_Cac_Phan_Tu_Tren_Duong_Cheo_Phu(a, dong, cot);



}
