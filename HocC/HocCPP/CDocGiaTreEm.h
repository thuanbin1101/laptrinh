#pragma once
#include<iostream>
#include<string>
#include"CDocGia.h" // goi lai lop doc gia ben file docgia.h
using namespace std;

class CDocGiaTreEm :public CDocGia
{
private:
	string hoten_nguoi_dai_dien;
public:
	void Input();
	void Output();
	int tinh_Tien_Lam_The();
	CDocGiaTreEm();
	~CDocGiaTreEm();
};

