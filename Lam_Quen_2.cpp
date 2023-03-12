// viet ham dinh nghia ra ngoai class:
// <kieu du lieu> <ten class> :: <ten phuong thuc>
// cu phap goi: <ten phuong thuc> cua <ten class>

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class ngay
{
private:
	int ngay, thang, nam;
public:
	void Nhap();
	void Xuat();
};

class HocSinh
{
private: 
	string ten;
	double diemToan, diemVan;
	ngay ngaySinh;

public:
	void NhapThongTin();
	void XuatThongTin();
	double TinhTrungBinh();
};

void ngay::Nhap()
{
	cout << "\nNhap ngay: "; cin >> ngay;
	cout << "\nNhap thang: "; cin >> thang;
	cout << "\nNhap nam: "; cin >> nam;
}

void ngay::Xuat()
{
	cout << "\nNgay " << ngay << " thang " << thang << " nam " << nam;
}

void HocSinh::NhapThongTin()
{
	cout << "Vui long nhap ten: ";
	getline(cin, this->ten);

	cout << "Nhap ngay sinh: ";
	ngaySinh.Nhap();

	do
	{
		cout << "Nhap diem toan: ";
		cin >> this->diemToan;
		if (this->diemToan < 0 || this->diemToan > 10) cout << "\nDiem nhap khong hop le!\n";
	} while (this->diemToan < 0 || this->diemToan > 10);

	do
	{
		cout << "Nhap diem van: ";
		cin >> this->diemVan;
		if (this->diemVan < 0 || this->diemVan > 10) cout << "\nDiem nhap khong hop le!\n";
	} while (this->diemVan < 0 || this->diemVan > 10);
}

void HocSinh::XuatThongTin()
{
	cout << "Ten: " << this->ten;
	ngaySinh.Xuat();
	cout << "\nDiem toan: " << this->diemToan;
	cout << "\nDiem van: " << this->diemVan;
	cout << "\nDiem trung binh: ";
}

double HocSinh::TinhTrungBinh()
{
	return ((this->diemToan + this->diemVan) / 2);
}

int main()
{
	HocSinh hs;
	hs.NhapThongTin();
	hs.XuatThongTin();
	double dtb = hs.TinhTrungBinh();
	cout << dtb;
	return 0;
}
