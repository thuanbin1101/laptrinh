#include<iostream>
using namespace std;
struct time
{
	int gio;
	int phut;
	int giay;
};
typedef struct time Time;

void nhap_Thoi_Gian(Time& tg)
{
	cout << "Nhap gio: ";
	cin >> tg.gio;
	cout << "Nhap phut: ";
	cin >> tg.phut;
	cout << "Nhap giay: ";
	cin >> tg.giay;
}

void xuat_Thoi_Gian(Time tg)
{
	tg.gio <= 12 ? cout << "Time: " << tg.gio << ":" << tg.phut << ":" << tg.giay << " " << "AM" << endl : cout << "Time: " << tg.gio << ":" << tg.phut << ":" << tg.giay << " " << "PM" << endl;
}
void change(Time &tg)
{
	
	while (tg.giay >= 60)
	{
		tg.phut++;
		tg.giay = tg.giay - 60;
	}
	while (tg.phut >= 60)
	{
		tg.gio++;
		tg.phut = tg.phut - 60;
	}
	while (tg.gio >= 24)
	{
		tg.gio = tg.gio - 24;
	}
}

int main()
{
	Time tg;
	nhap_Thoi_Gian(tg);
	change(tg);
	xuat_Thoi_Gian(tg);
	return 0;
}