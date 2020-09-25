#pragma once // tranh tinh trang dung do thu vien - trong moi tinh huong chi co 1 thu vien duoc tao ra tat ca cac file
#include<iostream>
#include<string>
using namespace std;
class CDocGia // lop cha
{
protected:
	string hoten;
	string ngaylapthe; // dd//mm/yyyy
	int so_thang_co_hieu_luc;
	bool KT; //true : tre em , false : nguoi lon
public:
	virtual void Input();
	virtual void Output();
	virtual int tinh_Tien_Lam_The() = 0; // khai bao phuong thuc thuan ao - cac lop con ke thua se dinh nghia
	CDocGia();
	~CDocGia();
	//GETTER , SETTER
	bool Getter_KT()
	{
		return KT;
	}
	void Setter_KT(bool kt)
	{
		KT = kt;
	}
};







