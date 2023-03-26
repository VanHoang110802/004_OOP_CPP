#include <iostream>
#include <string>

using namespace std;

class NgayThangNam
{
private:
	int ngaySinh, thangSinh, namSinh;
public:
	NgayThangNam(void);
	NgayThangNam(int, int, int);
	NgayThangNam(const NgayThangNam&);
	void Xuat();
	~NgayThangNam(void);
	
};

NgayThangNam::NgayThangNam(void)
{
	ngaySinh = 11;
	thangSinh = 8;
	namSinh = 2002;
}

NgayThangNam::NgayThangNam(int ngay, int thang, int nam)
{
	this->ngaySinh = ngay;
	this->thangSinh = thang;
	this->namSinh = nam;
}

NgayThangNam::NgayThangNam(const NgayThangNam &ntn)
{
	this->ngaySinh = ntn.ngaySinh;
	this->thangSinh = ntn.thangSinh;
	this->namSinh = ntn.namSinh;
}

void NgayThangNam::Xuat()
{
	cout << "Ngay thang nam sinh: " << this->ngaySinh << '/' << this->thangSinh << '/' << this->namSinh << '\n';
}

NgayThangNam::~NgayThangNam(void)
{

}

class SinhVien
{
private:
	string maSo, hoTen;
	NgayThangNam ntn;
	double diemLyThuyet, diemThucHanh;
public:
	SinhVien(void);
	SinhVien(string);
	SinhVien(string, string);
	SinhVien(string, string, double, double);
	SinhVien(string, string, NgayThangNam);
	SinhVien(string, string, NgayThangNam, double, double);
	SinhVien(string, string, int, int, int, double, double);
	SinhVien(const SinhVien&);
	void Xuat();
	~SinhVien(void);
};

SinhVien::SinhVien()
{
	this->maSo = "";
	this->hoTen = "";
	this->diemLyThuyet = 10;
	this->diemThucHanh = 10;
}

SinhVien::SinhVien(string maSV)
{
	this->maSo = maSV;
	this->hoTen = "";
	this->diemLyThuyet = 10;
	this->diemThucHanh = 10;
}

SinhVien::SinhVien(string maSV, string fullName)
{
	this->maSo = maSV;
	this->hoTen = fullName;
	this->diemLyThuyet = 10;
	this->diemThucHanh = 10;
}

SinhVien::SinhVien(string maSV, string fullName, double dlt, double dth)
{
	this->maSo = maSV;
	this->hoTen = fullName;
	this->diemLyThuyet = dlt;
	this->diemThucHanh = dth;
}

SinhVien::SinhVien(string maSV, string fullName, NgayThangNam ntn)
{
	this->maSo = maSV;
	this->hoTen = fullName;
	this->ntn = ntn; // gán như này tuy nhiên không sai, nhưng nếu có con trỏ thì coi chừng.
	this->diemLyThuyet = 10; // mac dinh 
	this->diemThucHanh = 10;
}

SinhVien::SinhVien(string maSV, string fullName, NgayThangNam ntn, double dlt, double dth)
{
	this->maSo = maSV;
	this->hoTen = fullName;
	this->ntn = ntn; // gán như này tuy nhiên không sai, nhưng nếu có con trỏ thì coi chừng.
	this->diemLyThuyet = dlt;
	this->diemThucHanh = dth;
}

SinhVien::SinhVien(string maSV, string fullName, int ngay, int thang, int nam, double dlt, double dth)
{
	this->maSo = maSV;
	this->hoTen = fullName;
	NgayThangNam ntnTemp(ngay, thang, nam);
	ntn = ntnTemp;
	this->diemLyThuyet = dlt;
	this->diemThucHanh = dth;
}

SinhVien::SinhVien(const SinhVien& sv)
{
	this->maSo = sv.maSo;
	this->hoTen = sv.hoTen;
	ntn = sv.ntn;
	this->diemLyThuyet = sv.diemLyThuyet;
	this->diemThucHanh = sv.diemThucHanh;
}

void SinhVien::Xuat()
{
	cout << "Ma so: " << this->maSo;
	cout << "\nHo ten: " << this->hoTen << '\n';
	ntn.Xuat();
	cout << "Diem ly thuyet: " << this->diemLyThuyet;
	cout << "\nDiem thuc hanh: " << this->diemThucHanh;
}


SinhVien::~SinhVien()
{

}

int main()
{
	string ma = "PH31092", fullName = "Van Hoang";
	double dlt = 8.9, dth = 9.9;
	int ngay = 20, thang = 10, nam = 2006;

	SinhVien sv1;
	sv1.Xuat();
	cout << "\n\n";

	SinhVien sv2(ma);
	sv2.Xuat();
	cout << "\n\n";

	SinhVien sv3(ma, fullName);
	sv3.Xuat();
	cout << "\n\n";

	SinhVien sv4(ma, fullName, dlt, dth);
	sv4.Xuat();
	cout << "\n\n";

	NgayThangNam ntn(ngay, thang, nam);
	SinhVien sv5(ma, fullName, ntn);
	sv5.Xuat();
	cout << "\n\n";

	SinhVien sv6(ma, fullName, ntn, dlt, dth);
	sv6.Xuat();
	cout << "\n\n";

	SinhVien sv7(ma, fullName, ngay, thang, nam, dlt, dth);
	sv7.Xuat();
	cout << "\n\n";

	SinhVien sv8(sv3);
	sv8.Xuat();
	return 0;
}
