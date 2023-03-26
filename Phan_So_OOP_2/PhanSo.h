#pragma once

#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo
{
private:
	int tuso, mauso;

public:
	void nhap();
	void xuat();
	double TinhKetQuaPhanSo();
	void rutgon();
	PhanSo TinhTong(PhanSo);
	PhanSo TinhHieu(PhanSo);
	PhanSo TinhTich(PhanSo);
	PhanSo TinhThuong(PhanSo);
};

