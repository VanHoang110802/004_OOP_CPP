#include "SinhVien.h"

void SinhVien::Nhap()
{
	cin.ignore();
	cout << "\nNhap ma so: ";
	getline(cin, this->maSo);

	cout << "\nNhap ho ten: ";
	getline(cin, this->hoTen);

	cout << "\nNhap lop: ";
	getline(cin, this->lopHoc);

	cout << "\nNhap CMND: ";
	getline(cin, this->soCMT);

	cout << "\nNhap ngay thang nam sinh:\n";
	ngayThangNamSinh.NhapNgayThangNam();

	do {
		cout << "\nNhap diem thi chuyen nganh: ";
		cin >> this->diemThi;

		if (this->diemThi < 0 || this->diemThi > 10)
		{
			cout << "\nDiem thi khong hop le. Xin kiem tra lai !\n\n";
		}
	} while (this->diemThi < 0 || this->diemThi > 10);
}

double SinhVien::LayDiemThi()
{
	return this->diemThi;
}

string SinhVien::LayHoTen()
{
	return this->hoTen;
}

void SinhVien::Xuat()
{
	cout << "\nMa so: " << this->maSo;
	cout << "\nHo ten: " << this->hoTen;
	cout << "\nLop: " << this->lopHoc;
	cout << "\nCMND: " << this->soCMT;
	cout << "\nNgay sinh: ";
	ngayThangNamSinh.XuatNgayThangNam();
	cout << "\nDiem thi: " << this->diemThi;
}
