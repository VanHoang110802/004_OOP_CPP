#include "NgayThangNam.h"

bool CheckNamNhuan(int nam)
{
	if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
		return true;
	else
		return false;
}

int CheckNgay(int thang, int nam)
{
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		return 31;
	}
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		return 30;
	}
	else
	{
		if (CheckNamNhuan(nam))
			return 29;
		else
			return 28;
	}
}

void NgayThangNam::NhapNgayThangNam()
{

	do
	{
		cout << "Nhap nam: ";
		cin >> this->nam;
		if (this->nam < 1900 || this->nam > 2023)
			cout << "Nam nhap khong hop le, xin hay kiem tra lai!\n\n";
	} while (this->nam < 1900 || this->nam > 2023);

	do
	{
		cout << "Nhap thang: ";
		cin >> this->thang;
		if (this->thang < 1 || this->thang > 12)
			cout << "Thang nhap khong hop le, xin hay kiem tra lai!\n\n";
	} while (this->thang < 1 || this->thang > 12);

	int cNgay = CheckNgay(this->thang, this->nam);
	do
	{
		cout << "Nhap ngay: ";
		cin >> this->ngay;
		if (this->ngay < 1 || this->ngay > cNgay)
			cout << "Ngay nhap khong hop le, xin hay kiem tra lai!\n\n";
	} while (this->ngay < 1 || this->ngay > cNgay);
}

void NgayThangNam::XuatNgayThangNam()
{
	cout << this->ngay << '/' << this->thang << '/' << this->nam;
}
