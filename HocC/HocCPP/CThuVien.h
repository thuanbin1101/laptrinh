#pragma once
#include<iostream>
#include<string>
#include"CDocGiaNguoiLon.h"
#include"CDocGiaTreEm.h"
#include<vector>
using namespace std;

class CThuVien
{
private:
	vector<CDocGia*> ds_docgia; // khai bao mang 1 chieu chua lop cha vi co virtual cho nen no se da hinh sang duoc tung thang con tuong ung
	
public:
	void Input();
	void Output();
	int tinh_Tong_Tien_Lam_The();
	CThuVien();
	~CThuVien();
};

