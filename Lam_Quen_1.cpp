/*
Nhập Học Sinh
Xuất học sinh
Tính trung bình
Xếp loại
*/

/*
	Quy tac dat ten:
	+ Ten lop: viet hoa chu cai dau moi tu.
	+ Ten bien: viet hoa chu cai dau cua tu thu 2 tro di.
	+ Ten bien toan cuc: them '_' vao dau moi ten bien & viet nhu ten bien binh thuong.

	Neu nhu o ben struct thi se khong co private, cho nen du lieu co the xu li thoai mai thao tac.
	Con ben class thi neu khong co private thi mac dinh no se coi nhu la co private luon, khong cho phep truy xuat thao tac.
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class HocSinh
{
private: // khong duoc de public, day la thuoc tinh.
	string ten;
	double diemToan, diemVan;

public: // day la phuong thuc.

	/* 
	ban than ham da nam trong class roi, nen khong can thiet phai them du lieu nua.
	cach 1 : viet luon ham trong class.
	cach 2: khai bao ham trong class roi viet ham ra ben ngoai.

	theo ben struct, khi ma ta goi ten bien thi se phai la ten truct roi . den phan tu can truy xuat, class cung nhu vay.
	nhung ma, ben class co con tro this, con tro nay no quan li den cai class hien tai, this cung la 1 doi tuong.
	tuy nhien, neu nhu ma khong co con tro nay cung khong sao, vi ban chat cac phuong thuc duoc nam trong class thi no da duoc hieu luon roi.
	neu dung cach dung this de truy xuat thi se chay cham hon so voi goi truc tiep nhung toc do khong dang ke, nhung ma duoc cai neu dung this viet no se ro rang hon :vv.
	*/
	void Nhap()
	{
		cout << "Vui long nhap ten: ";
		getline(cin, this->ten);

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

	void Xuat()
	{
		cout << "Ten: " << this->ten;
		cout << "\nDiem toan: " << this->diemToan;
		cout << "\nDiem van: " << this->diemVan;
		cout << "\nDiem trung binh: ";
	}

	double TinhTrungBinh()
	{
		return ((this->diemToan + this->diemVan) / 2);
	}
};


int main()
{
	HocSinh hs;
	hs.Nhap();
	hs.Xuat();
	double dtb = hs.TinhTrungBinh();
	cout << dtb;
	return 0;
}
