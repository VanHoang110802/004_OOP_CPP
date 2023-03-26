#pragma once
#include "NgayThangNam.h"

class SinhVien
{
private:
	string maSo, hoTen, lopHoc, soCMT;
	NgayThangNam ngayThangNamSinh;
	double diemThi;
public:
	void Nhap();
	void Xuat();
	double LayDiemThi();
	string LayHoTen();
};
