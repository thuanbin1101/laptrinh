#include<iostream>
using namespace std;
typedef struct {
	int d, m, y;
}Date;
bool Check(Date& years) {
	if (years.y % 4 == 0 && years.y % 100 != 0 || years.y % 400 == 0) {
		return 1;
	}
	return 0;
}
void Nhap(Date& days, Date& months, Date& years) {
	cout << "Nhap ngay: ";
	cin >> days.d;
	cout << "Nhap thang: ";
	cin >> months.m;
	cout << "Nhap nam: ";
	cin >> years.y;
}
void Xuat(Date days, Date months, Date years) {
	cout << "Day/Month/Year: " << days.d << "/" << months.m << "/" << years.y;
}
int daysInt(Date& months, Date& years) {
	switch (months.m) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (Check(years))
			return 29;
		else
			return 28;
	}
}
void ChuanHoa(Date& days, Date& months, Date& years) {
	if (daysInt(months, years) && Check(years) == 1) {
		while (days.d > 31) {
			days.d -= 31;
			months.m++;
		}
		while (days.d > 30) {
			days.d -= 30;
			months.m++;
		}
		while (days.d > 29) {
			days.d -= 29;
			months.m++;
		}
		while (months.m > 12) {
			months.m -= 12;
			years.y++;
		}
	}
	else if (daysInt(months, years) && Check(years) == 0) {
		while (days.d > 31) {
			days.d -= 31;
			months.m++;
		}
		while (days.d > 30) {
			days.d -= 30;
			months.m++;
		}
		while (days.d > 28) {
			days.d -= 28;
			months.m++;
		}
		while (months.m > 12) {
			months.m -= 12;
			years.y++;
		}
	}
}
int main() {
	Date days, months, years;
	Nhap(days, months, years);
	ChuanHoa(days, months, years);
	Xuat(days, months, years);
	cout << "\n";
	system("pause");
}