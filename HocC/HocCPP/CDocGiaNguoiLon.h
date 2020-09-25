#pragma once
#include<iostream>
#include<string>
#include"CDocGia.h"
using namespace std;
class CDocGiaNguoiLon :public CDocGia
{
private:
	string CMND;
public:
	void Input();
	void Output();
	int tinh_Tien_Lam_The();
	CDocGiaNguoiLon();
	~CDocGiaNguoiLon();
};



