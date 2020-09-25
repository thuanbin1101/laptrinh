#include<iostream> // bao trum luon ca stdio.h
#include<ctime>
using namespace std;
int main()
{
	int namsinh, namhientai, tuoi;
	time_t t = time(0); // lay nam sinh hien tai
	struct tm* Now = localtime(&t); // lay nam sinh hien tai
	namhientai = Now->tm_year + 1900; // lay nam sinh hien tai
	cout << "Nhap nam sinh cua ban: ";
	cin >> namsinh;
	tuoi = namhientai - namsinh;
	cout << "Tuoi cua ban la: " << tuoi;
	system("pause"); // dung man hinh
	return 0;
}