// cu khai bao truoc ra khong lam sao ca.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// hoi truoc minh se lam bai nay = struct, nhung gio minh se dung lam class nhe.
class NgayThangNamSinh
{
private:
	int ngaySinh, thangSinh, namSinh;
public:
	void NhapNgayThang();
	void XuatNgayThang();
};

class HocSinh
{
// nen nho, khai bao cac bien giong he ben struct nhung khi khai bao xong, ta se dat cai tu private len dau de khoa lai.

private:
	string hoTen;
	double diemToan, diemVan;
	NgayThangNamSinh ns;
public:
	// o ben kia neu dung struct thi khi tao ham se phai truyen tham so, con ben nay thi khong can. Vi ban than cai ham nhap da nam trong cai class HocSinh nen da co tham chieu het roi.
	void Nhap();
	void Xuat();
	double TinhTB();
};

void NgayThangNamSinh::NhapNgayThang()
{
	cout << "Nhap ngay sinh: "; cin >> this->ngaySinh;
	cout << "Nhap thang sinh: "; cin >> this->thangSinh;
	cout << "Nhap nam sinh: "; cin >> this->namSinh;
}

void NgayThangNamSinh::XuatNgayThang()
{
	cout << this->ngaySinh << '/' << this->thangSinh << '/' << this->namSinh;
}

void HocSinh::Nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, this ->hoTen);
	
	ns.NhapNgayThang();
	
	do
	{
		cout << "Nhap diem toan: ";
		cin >> this->diemToan;
		if (this->diemToan < 0 || this->diemToan > 10)
		{
			cout << "\nDiem toan nhap khong hop le, xin hay kiem tra lai!\n";
		}
	} while (this->diemToan < 0 || this->diemToan > 10);
	
	do
	{
		cout << "Nhap diem van: ";
		cin >> this->diemVan;
		if (this->diemVan < 0 || this->diemVan > 10)
		{
			cout << "\nDiem van nhap khong hop le, xin hay kiem tra lai!\n";
		}
	} while (this->diemVan < 0 || this->diemVan > 10);
}

void HocSinh::Xuat()
{
	cout << "Ho ten: " << this->hoTen;
	cout << "\nNgay thang nam sinh: "; ns.XuatNgayThang();
	cout << "\nDiem toan: " << this->diemToan;
	cout << "\nDiem van: " << this->diemVan;
}

double HocSinh::TinhTB()
{
	return ((this->diemToan + this->diemVan) / 2);
}

int main()
{
	HocSinh hS;
	hS.Nhap();
	hS.Xuat();
	double tb = hS.TinhTB();
	cout << "\nDiem trung binh: " << tb;
	return 0;
}
