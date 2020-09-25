#include<iostream>
using namespace std;
struct date
{
	int ngay;
	int thang;
	int nam;
};
typedef struct date Date;

void nhap(Date& date)
{
	cout << "Nhap ngay: ";
	cin >> date.ngay;
	cout << "Nhap thang: ";
	cin >> date.thang;
	cout << "Nhap nam: ";
	cin >> date.nam;
}
void xuat(Date date)
{
	cout << "dd//mm//yyyy = " << date.ngay << "/" << date.thang << "/" << date.nam;
}
bool nam_Nhuan(Date date)
{
	if ((date.nam % 4 == 0 && date.nam % 100 != 0) || date.nam % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int daysInt(Date date)
{
	int soNgayCuaThang = 0;
	switch (date.thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		soNgayCuaThang = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		soNgayCuaThang = 30;
		break;
	case 2:
		if (nam_Nhuan(date))
		{
			soNgayCuaThang = 29;
		}
		else
		{
			soNgayCuaThang = 28;
		}
	}
	return soNgayCuaThang;
}
void change(Date& date)
{
	if ((date.thang == 1 && date.ngay >= 31) || (date.thang == 3 && date.ngay >= 31) || (date.thang == 5 && date.ngay >= 31) || (date.thang == 7 && date.ngay >= 31) || (date.thang == 8 && date.ngay >= 31) || (date.thang == 10 && date.ngay >= 31) || (date.thang == 12 && date.ngay >= 31))
	{

		while (date.ngay > 31)
		{
			date.thang++;
			date.ngay = (date.ngay - 31) ;
		}
		while (date.thang > 12)
		{
			date.nam++;
			date.thang = date.thang - 12;
		}
		xuat(date);
	}
	else if ((date.thang == 4 && date.ngay >=30) || (date.thang == 6 && date.ngay >= 30) || (date.thang == 9 && date.ngay >= 30) || (date.thang == 11 && date.ngay >= 30))
	{
		while (date.ngay >= 31)
		{
			date.thang++;
			date.ngay = (date.ngay - 30) ;
		}
		while (date.thang > 12)
		{
			date.nam++;
			date.thang = date.thang - 12;
		}
		xuat(date);
	}
	else if (date.thang == 2 && date.ngay >=29)
	{
		if (nam_Nhuan(date))
		{
			while (date.ngay >= 29)
			{
				date.thang++;
				date.ngay = (date.ngay - 29) + 1;
			}
			while (date.thang > 12)
			{
				date.nam++;
				date.thang = date.thang - 12;
			}

		}
		else
		{
			while (date.ngay >= 29)
			{
				date.thang++;
				date.ngay = (date.ngay - 29) + 1;
			}
			while (date.thang > 12)
			{
				date.nam++;
				date.thang = date.thang - 12;
			}

		}
		xuat(date);
	}
	else if (date.thang > 12 && date.ngay <= 31)
	{
		while (date.thang > 12)
		{
			date.nam++;
			date.thang = date.thang - 12;
		}
		xuat(date);
	}
	else if (date.thang > 12 && date.ngay > 31)
	{
		while (date.ngay > 31)
		{
			
			date.thang++;
			date.ngay = date.ngay - 31;
		}
		while (date.thang > 12)
		{
			date.nam++;
			date.thang = date.thang - 12;
		}
		xuat(date);
	}
	else
	{
		xuat(date);
	}

}
void check(Date date)
{

	if ((date.ngay >= 1 && date.ngay <= daysInt(date)) && (date.thang >= 1 && date.thang <= 12) && (date.nam >= 1))
	{
		cout << "Hop le" << endl;
		xuat(date);
	}
}
int main()
{
	Date date;
	nhap(date);
	change(date);
	return 0;
}