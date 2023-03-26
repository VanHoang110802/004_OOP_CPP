#pragma once
#include "SinhVien.h"

void NhapDanhSachLop(SinhVien*, int);
void XuatDanhSachLop(SinhVien*, int);
double TimDiemThiCaoNhat(SinhVien* , int);
template <class T>
void HoanVi(T& , T&);
void SapTangDanTheoTen(vector<SinhVien>&);
