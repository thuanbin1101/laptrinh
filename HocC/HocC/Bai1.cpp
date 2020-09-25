#include<stdio.h>
#include<math.h>
#include <stdlib.h>

void cau2(int n)
{

	if (n % 2 == 0 && n > 0)
	{
		printf("\n%d la so chan va la so duong",n);
	}
	else if (n % 2 == 0 && n < 0)
	{
		printf("\n%d la so chan va la so am",n);
	}
	else if (n % 2 != 0 && n > 0)
	{
		printf("\n%d la so le va la so duong",n);
	}
	else
	{
		printf("\n%d la so le va la so am",n);
	}
}

void cau3(int a, int b)
{
	printf("\nTong cua %d + %d = %d", a, b, a + b);
	printf("\nHieu cua %d - %d = %d", a, b, a - b);
	printf("\nTich cua %d * %d = %d", a, b, a * b);
	if (a != 0)
	{
		printf("\nThuong cua %d / %d = %f", a, b, (float)a / b);
	}
	
}

void cau4(int a, int b)
{
	if (a > b)
	{
		printf("\n%d ", a);
	}
	else if (a < b)
	{
		printf("\n%d", b);
	}
	else
	{
		printf("\n%d = %d", a, b);
	}
}

void cau5(int a, int b, int c, int d)
{
	
	int max = a;
	if (b > max)
	{
		max = b;
		printf("max = %d", max);
	}
	else if (c > max)
	{
		max = c;
		printf("max = %d", max);
	}
	else if (d > max)
	{
		max = d;
		printf("max = %d", max);
	}
	else
	{
		printf("\nKhong co so nao lon nhat");
	}

}

void cau6(int chieudai, int chieurong)
{
	
	printf("\nChu vi cua hinh chu nhat: (%d + %d) * 2 = %d", chieudai, chieurong, (chieudai + chieurong) * 2);
	printf("\nDien tich cua hinh chu nhat: %d * %d = %d", chieudai, chieurong, chieudai * chieurong);
}

void cau7(float bankinh)
{
	const float PI = 3.14;
	printf("\nChu vi hinh tron la: C= 2 * PI * R = 2 * %f * %f = %f", PI, bankinh,2*PI*bankinh);
	printf("\nDien tich hinh tron la: S = PI * R^2 = %f * %f^2 = %f", PI, bankinh, PI * pow(bankinh, 2));

}

void cau8(float a, float b)
{
	if (a == 0)
	{
		printf("\nPTVN");
	}
	else if (a != 0 && b == 0)
	{
		printf("\nPTVSN");
	}
	else
	{
		float x = -b / a;
		printf("\n PT co nghiem la: x = -b / a = -%f / %f = %f", b, a, x);
	}
}

void cau9(float a, float b, float c)
{
	if (a == 0)
	{
		if (b == 0)
		{
			printf("\nPTVN");
		}
		else if (b != 0 && c == 0)
		{
			printf("\nPTVSN");
		}
		else
		{
			float x = -c / b;
			printf("\n PT co nghiem la: x = -c / b = -%f / %f = %f", c, b, x);
		}
	}
	else
	{
		float delta = b * b - 4 * a * c;
		if (delta < 0)
		{
			printf("\nPTVN");
		}
		else if (delta == 0)
		{
			float x1 = -b / (2 * a);
			printf("\nPT co nghiem kep: x1 = x2 = -b/2a = %f / 2 * %f = %f", -b, a, x1);
		}
		else
		{
			double x1 = (-b + sqrt(delta)) / (2 * a);
			double x2 = (-b - sqrt(delta)) / (2 * a);
			printf("\nPT co 2 nghiem phan biet:");
			printf("\nx1 = (-b + sqrt(delta)) / (2*a) = %f ", x1);
			printf("\nx2 = (-b - sqrt(delta)) / (2*a) = %f ", x2);
		}

	}
}

void cau10(float a, float b, float c)
{
	if (a + b > c || b + c > a || a + c > b)
	{
		printf("\n a , b , c la 3 canh cua tam giac");
	}
	else
	{
		printf("\n a , b ,c khong la 3 canh cua tam giac");
	}
}
int main()
{
	int luachon;
	while (100)
	{
		system("cls");
		printf("\n\n\t\t===========BAI TAP SO 1===========");
		printf("\n\t1.Viet chuong trinh in ra man hinh hello world");
		printf("\n\t2.Nhap vao mot so nguyen n, cho biet so do chan hay le , am hay duong ,in ket qua kiem tra man hinh .Moi ket luan tren 1 dong");
		printf("\n\t3.Nhap vao 2 so nguyen a,b.In ra man hinh tong ,hieu,tich,thuong a/b cua chung. Luu y khi xu ly phep chia se can ep kieu,kiem tra mau khac 0.Xuat ket qua ra man hinh ");
		printf("\n\t4.Nhap vao 2 so nguyen a ,b.So sanh so nao lon hon , so nao nho hon hay hai so bang nhau.In ket qua ra man hinh");
		printf("\n\t5.Hay nhap 4 so a,b,c,d.Tim max gan gia tri lon nhat do cho bien max.In gia tri max tim duoc ra man hinh.Trong truong hop 4 so bang nhau thi in ra: khong co so lon nhat");
		printf("\n\t6.Viet chuong trinh nhap vao 2 canh cua hinh chu nhat va tinh chu vi , dien tich cua hinh chu nhat do.");
		printf("\n\t7.Viet chuong trinh nhap ban kinh cua hinh trong va chu vi,dien tich hinh tron do");
		printf("\n\t8.Giai va bien luan phuong trinh ax+b=0");
		printf("\n\t9.Giai va bien luan phuong trinh bac 2: ax^2+bx+c=0 ");
		printf("\n\t10.Nhap vao ba so a,b,c(la cac so thuc ko am).Kiem tra xem do co phai la ba canh cua tam giac hay khong");
		printf("\n\n\t\t===========KET THUC================");

		printf("\n\tNhap lua chon:");
		scanf("%d", &luachon);

		if (luachon == 1)
		{
			printf("\nHello world");
			
		}
		else if (luachon == 2)
		{
			int n;
			printf("\nNhap n:");
			scanf("%d", &n);
			cau2(n);
			

		}
		else if (luachon == 3)
		{
			int a,b;
			printf("\nNhap a:");
			scanf("%d", &a);
			printf("\nNhap b:");
			scanf("%d", &b);
			cau3(a,b);
			

		}
		else if (luachon == 4)
		{
			int a,b;
			printf("\nNhap a:");
			scanf("%d", &a);
			printf("\nNhap b:");
			scanf("%d", &b);
			cau4(a,b);
			

		}
		else if (luachon == 5)
		{
			int a, b, c, d;
			printf("\nNhap a:");
			scanf("%d", &a);
			printf("\nNhap b:");
			scanf("%d", &b);
			printf("\nNhap c:");
			scanf("%d", &c);
			printf("\nNhap d:");
			scanf("%d", &d);
			cau5(a, b, c, d);
			

		}
		else if (luachon == 6)
		{
			int chieudai,chieurong;
			printf("\nNhap chieu dai:");
			scanf("%d", &chieudai);
			printf("\nNhap chieu rong:");
			scanf("%d", &chieurong);
			cau6(chieudai,chieurong);
			

		}
		else if (luachon == 7)
		{
			float bankinh;
			printf("\nNhap ban kinh hinh tron:");
			scanf("%f", &bankinh);
			cau7(bankinh);
		

		}
		else if (luachon == 8)
		{
			float a, b;
			printf("\nNhap a:");
			scanf("%f", &a);
			printf("\nNhap b:");
			scanf("%f", &b);
			cau8(a, b);


		}
		else if (luachon == 9)
		{
			float a, b, c;
			printf("\nNhap a:");
			scanf("%f", &a);
			printf("\nNhap b:");
			scanf("%f", &b);
			printf("\nNhap c:");
			scanf("%f", &c);
			cau9(a, b, c);
		

		}
		else if (luachon == 10)
		{
			float a, b, c;
			do
			{
				printf("\nNhap a:");
				scanf("%f", &a);
				printf("\nNhap b:");
				scanf("%f", &b);
				printf("\nNhap c:");
				scanf("%f", &c);
				if (a < 0 || b < 0 || c < 0)
				{
					printf("\n Cac canh cua tam giac phai > 0 ");
				}
			} while (a < 0 || b < 0 || c < 0);
			cau10(a, b, c);
		

		}
		else
		{
			break;
		}
	}
}