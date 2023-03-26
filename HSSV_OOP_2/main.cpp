/*
Viết chương trình nhập dữ liệu danh sách các sinh viên có trong 1 lớp biết thông tin 1 sinh viên gồm có: Mã số, họ tên, lớp, ngày sinh, số CMND, điểm thi môn chuyên ngành.
Hãy tìm ra sinh viên có điểm thi chuyên ngành cao nhất lớp, nếu có nhiều sinh viên có điểm thi chuyên ngành bằng nhau thì xuất ra tất cả các sinh viên đó theo thứ tự tăng
dần của tên.
*/

#include "LopHoc.h"

int main()
{
	int soLuong;
	do
	{
		cout << "Nhap so luong sinh vien: ";
		cin >> soLuong;
		if (soLuong < 1)
		{
			cout << "\nSo luong nhap khong hop le!\n\n";
		}
	} while (soLuong < 1);

	SinhVien *arrSinhVien = new SinhVien[soLuong];

	NhapDanhSachLop(arrSinhVien, soLuong);
	XuatDanhSachLop(arrSinhVien, soLuong);

	cout << "\n\n";
	vector <SinhVien> vecSinhVien;
	double diemLonNhat = TimDiemThiCaoNhat(arrSinhVien, soLuong);

	for (int i = 0; i < soLuong; i++)
	{
		if (arrSinhVien[i].LayDiemThi() == diemLonNhat)
		{
			vecSinhVien.push_back(arrSinhVien[i]);
		}
	}

	if (vecSinhVien.size() == 1)
	{
		vecSinhVien[0].Xuat();
	}
	else
	{
		SapTangDanTheoTen(vecSinhVien);

		// Xuất ra.
		for (int i = 0; i < vecSinhVien.size(); i++)
		{
			vecSinhVien[i].Xuat();
		}
	}

	delete[]arrSinhVien;
	return 0;
}
