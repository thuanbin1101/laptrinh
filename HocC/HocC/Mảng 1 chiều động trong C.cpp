#include<stdio.h>
#include<stdlib.h>
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
		printf(" %d ", a[i]);
	}
}

void xuLi(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("%d ", a[i]);
		}
	}
}

// ham them phan tu vao vi tri bat ki trong mang
void Them(int a[], int &n, int vitri, int x)
{
	// Truoc khi them phan tu x ta phai noi rong cai mang ra
	realloc(a, (n + 1) * sizeof(int));

	for (int i = n - 1; i >= vitri; i--)
	{
		a[i + 1] = a[i];
	}
	a[vitri] = x; // them phan tu x vao vi tri can them.
	n++;
}

void Xoa(int a[], int &n, int vt)
{
	for (int i = vt + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}


	realloc(a, (n - 1) * sizeof(int)); // thu hep vung nho do con tro a quan li.
	n--;// sau khi xoa phan tu tai vi tri x , thi minh moi di thu hep vi tri do ve.
}



int main()
{
	int *a;
	int n;
	do
	{
		printf("\n Nhap so luong phan tu mang: ");
		scanf("%d", &n);
		if (n < 0)
		{
			printf("\n Khong hop le");
		}
	} while (n < 0);

	/* cap phat vung nho de con tro quan li <=> tao mang dong.*/
	//a = (int *)malloc(n * sizeof(int)); // khi con tro a tro den dia chi cua vung nho ma hdh se cap phat  <=> con tro se tro den o nho dau tien cua vung nho do.

	/* cap phat vung nho de con tro quan li <=> tao mang dong.*/
	//a = (int *)calloc(n, sizeof(int));

	/* cap phat vung nho de con tro quan li <=> tao mang dong.*/
	a = (int*)realloc(NULL, n * sizeof(int));

	printf("\n\n\tNHAP MANG");
	nhapMang(a, n);
	printf("\n\n\tXUAT MANG\n");
	xuatMang(a, n);
	printf("\n\n\tCAC PHAN TU LA SO CHAN\n");
	xuLi(a, n);
	printf("\n\n\t===================================================");
	int x;
	int vitri;
	printf("\n\n\tTHEM PHAN TU TRONG MANG DONG\n");
	printf("\nNhap gia tri can them: ");
	scanf("%d", &x);
	printf("\nNhap vi tri can them: ");
	scanf("%d", &vitri);
	Them(a, n, vitri, x);
	printf("\n\n\tMANG SAU KHI THEM\n ");
	xuatMang(a, n);
	//printf("\n\n\tXOA CAC PHAN TU TRONG MANG DONG\n");
	//printf("\nNhap vi tri can xoa:");
	//scanf("%d", &vitri);
	//Xoa(a, n, vitri);
	//printf("\n\n\tMANG SAU KHI XOA\n");
	//xuatMang(a, n);
	free(a); // giai phong
	return 0;

}