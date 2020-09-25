#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

struct doanhnghiep
{
	char MaDoanhNghiep[30];
	char GiamDoc[30];
	float VonDieuLe;
	int SoNhanVien;
};
typedef struct doanhnghiep DoanhNghiep;

void nhap_1_DN(DoanhNghiep& dn)
{
	printf("\nNhap Ma doanh nghiep:");
	rewind(stdin);
	gets_s(dn.MaDoanhNghiep);
	printf("\nNhap ten giam doc:");
	rewind(stdin);
	gets_s(dn.GiamDoc);
	printf("\nNhap von dieu le:");
	scanf("%f", &dn.VonDieuLe);
	printf("\nNhap so nhan vien : ");
	scanf("%d", &dn.SoNhanVien);
}

void xuat_1_DN(DoanhNghiep dn)
{
	printf("\nMDN: %s", dn.MaDoanhNghiep);
	printf("\nGiam doc: %s", dn.GiamDoc);
	printf("\nVon: %0.1f", dn.VonDieuLe);
	printf("\nSo nhan vien: %d\n", dn.SoNhanVien);
}

void nhap_Danh_Sach_Doanh_Nghiep(DoanhNghiep a[], int n)
{	
	for (int i = 0; i < n; i++)
	{
		printf("\nDoanh nghiep %d",i+1);
		nhap_1_DN(a[i]);
	}
}

void xuat_Danh_Sach_Doanh_Nghiep(DoanhNghiep a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nDoanh nghiep %d:", i + 1);
		xuat_1_DN(a[i]);
	}
}

void HoanVi(DoanhNghiep &dn1, DoanhNghiep &dn2)
{
	DoanhNghiep temp = dn1;
	dn1 = dn2;
	dn2 = temp;
}

void sap_Xep_Tang_Dan_Theo_Von_Dieu_Le(DoanhNghiep dn[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (dn[i].VonDieuLe > dn[j].VonDieuLe)
			{
				HoanVi(dn[i],dn[j]);
			}
		}
	}
	xuat_Danh_Sach_Doanh_Nghiep(dn, n);
}

void Them(DoanhNghiep dn[], int& n, int vt, DoanhNghiep x)
{
	for (int i = n - 1; i >= vt; i--)
	{
		dn[i + 1] = dn[i];
	}
	dn[vt] = x;
	n++;
}

void in_Doanh_Nghiep(DoanhNghiep dn)
{
	printf("\nMDN : %s", dn.MaDoanhNghiep);
	printf("\nSo nhan vien : %d", dn.SoNhanVien);

}

void inMDN(DoanhNghiep ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ds[i].SoNhanVien > 300 && (ds[i].MaDoanhNghiep[0] == 'D' && ds[i].MaDoanhNghiep[1] == 'N'));
		{
			in_Doanh_Nghiep(ds[i]);
		}
	}
}

int kiem_Tra_Dau_Cach(char madn[])
{
	for (int i = 0; i < strlen(madn); i++)
	{
		if (madn[i] == ' ')
		return 1;
	}
	return 0;
}
void doanh_Nghiep_Khong_Hop_Le(DoanhNghiep ds[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ds[i].VonDieuLe < 10 || kiem_Tra_Dau_Cach(ds[i].MaDoanhNghiep) == 1)
		{
			dem++;
		}
	}
	printf("\nSo doanh nghiep khong hop le: %d", dem);
}
int main()
{
	DoanhNghiep ds[100];
	int n;
	DoanhNghiep y;
	int x;
	printf("\nNhap so luong doanh nghiep:");
	scanf("%d", &n);
	printf("\n\n\t\t DANH SACH NHAP DOANH NGHIEP");
	nhap_Danh_Sach_Doanh_Nghiep(ds, n);
	//printf("\n\n\t\t NHAP THONG TIN DOANH NGHIEP CAN THEM");
	//printf("\n nhap vi tri can them:");
	//scanf("%d", &x);
	//nhap_1_dn(y);
	//them(ds, n, x, y);
	printf("\n\n\t\t XUAT DANH SACH NHAP DOANH NGHIEP");
	xuat_Danh_Sach_Doanh_Nghiep(ds, n);
	printf("\n\n\t\t SAP XEP TANG DAN THEO VON DIEU LE");
	sap_Xep_Tang_Dan_Theo_Von_Dieu_Le(ds, n);
	printf("\n\n\t\t MA DOANH NGHIEP DN VA NHAN VIEN NHIEU HON 300");
	inMDN(ds, n);
	printf("\n\n\t\t\ DOANH NGHIEP KHONG HOP LE");
	doanh_Nghiep_Khong_Hop_Le(ds, n);
	
	
}