#include<stdio.h>
#include <math.h>
void nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap phan tu a[%d] = ", i);
		scanf("%d", &a[i]);
	}
} 

void xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nPhan tu a[%d] = %d", i,a[i]);
	}
}

int dem_phan_Tu_Am(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			dem++;
		}
	}
	return dem;
}

void tim_Max(int a[], int n)
{
	int max;
	for (int i = 0; i < n; i++)
	{
		 max = a[0];
		if (a[i] > max)
		{
			max = a[i];
			
		}
	}
		printf("%d", max);
}

void tim_Min(int a[], int n)
{
	int min;
	for (int i = 0; i < n; i++)
	{
		min = a[0];
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("%d", min);
}

void am_Lon_Nhat(int a[], int n)
{
	int maxAm = 0;
	for (int i = 0; i < n; i++)
	{
			if (a[i] < 0)
			{
				maxAm = a[i];
				break;
			}
	}
	if(maxAm != 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] <0 && a[i] > maxAm)
			{
				maxAm = a[i];
			
			}
		}
		printf("\nPhan tu am lon nhat trong mang: %d ", maxAm);
	}
	else printf("\nKhong co phan tu am trong mang");
		
	
}

void duong_Nho_Nhat(int a[], int n)
{
	int minDuong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			minDuong = a[i];
			break;
		}
	}
	if (minDuong != 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0 && a[i] < minDuong)
			{
				minDuong = a[i];
				
			}
		}
			printf("\nPhan tu duong nho nhat: %d", minDuong);
	}
	else printf("\nKhong co phan tu duong trong mang");
}

// LIỆT KÊ CÁC SỐ NGUYÊN TỐ TRONG MẢNG
 bool kiem_Tra_SNT(int n)
{
	
	 if (n < 2)
		{
		 return  false;
		}
	 else // n>=2
	 {
		 if (n == 2)
		 {
			 return true;
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
	return true;
}

 void liet_Ke_Cac_SNT(int a[], int n)
 {
	   
	 for (int i = 0; i < n; i++)
	 {
		 if (kiem_Tra_SNT(a[i]) == true)
		 {
			 printf("%5d", a[i]);
		 }
	 }
}

 bool kiem_Tra_So_Chinh_Phuong(int n)
 {
	 int sqr = sqrt(n);
	 if (sqr * sqr == n)
	 {
		 printf("\n%d la so chinh phuong ", n);
		 return true;
	 }
	 else
	 {
		 printf("\n%d khong la so chinh phuong", n);
		 return false;
	 }
 }

 void liet_Ke_Cac_So_Chinh_Phuong_Trong_Mang(int a[], int n)
 {
	 for (int i = 0; i < n; i++)
	 {
		 if (kiem_Tra_So_Chinh_Phuong(a[i]) == true)
		 {
			 printf("%5d", a[i]);
		 }
	 }
 }

void sap_Xep_Tang_Dan(int a[],int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				// Hoan vi 2 so a[i] va a[j]
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nMang sap xep tang dan: ");
	for (int i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	

}

void sap_Xep_Giam_Dan(int a[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				// Hoan vi 2 so a[i] va a[j]
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nMang sap xep tang dan: ");
	for (int i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
}

int tim_Kiem(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			return 1;
		}
	}
	return 0;
}

void Them(int a[], int n,int vitrithem,int giatrithem)
{
	
	for (int i = n - 1; i >= vitrithem; i--)
	{
		a[i + 1] = a[i];
	}
	a[vitrithem] = giatrithem;
	n++;
	xuat_Mang(a, n);
}

void Xoa(int a[], int n, int vitrixoa)
{
	for (int i = vitrixoa + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
	xuat_Mang(a, n);
}






int main()
{
	int a[100];
	int n;
	int x;
	int vitrithem;
	int giatrithem;
	int vitrixoa;
	do
	{
			printf("\nNhap so luong phan tu: ");
			scanf("%d", &n);
	if (n < 0 || n>100)
	{
		printf("\nNhap lai:");
	}

	}
	while (n < 0 || n>100);

	printf("\nNHAP MANG");
	nhap_Mang(a, n);
	printf("\nXUAT MANG");
	xuat_Mang(a, n);
	printf("\nDEM PHAN TU AM\n");
	printf("%d", dem_phan_Tu_Am(a, n));
	printf("\nPHAN TU MAX\n");
	tim_Max(a, n);
	printf("\nPHAN TU MIN\n");
	tim_Min(a, n);
	am_Lon_Nhat(a, n);
	duong_Nho_Nhat(a, n);
	printf("\nLIET KE CAC SO NGUYEN TO TRONG MANG\n");
	liet_Ke_Cac_SNT(a, n);
	liet_Ke_Cac_So_Chinh_Phuong_Trong_Mang(a, n);
	//sap_Xep_Tang_Dan(a, n);
	//sap_Xep_Giam_Dan(a, n);
	printf("\nNhap phan tu can tim kiem:");
	scanf("%d", &x);
	printf("\n%2d\n", tim_Kiem(a, n, x));
	//printf("\nNhap vi tri can them:");
	//scanf("%d", &vitrithem);
	//printf("\nNhap gia tri them: ");
	//scanf("%d", &giatrithem);
	//Them(a, n,vitrithem,giatrithem );
	printf("\nNhap vi tri can xoa:");
	scanf("%d", &vitrixoa);
	Xoa(a, n,vitrixoa);



	
}