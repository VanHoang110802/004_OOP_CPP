#pragma once

#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo
{
private:
	int tuso, mauso;
public:
	void Nhap();
	void Xuat();
	double TinhKetQuaPhanSo();
	void RutGon();
	PhanSo TinhTong(PhanSo);
	PhanSo TinhHieu(PhanSo);
	PhanSo TinhTich(PhanSo);
	PhanSo TinhThuong(PhanSo);
};
