* GIỚI THIỆU VẤN ĐỀ *
Đối với những kiểu dữ liệu có sẵn (số nguyên, số thực) thì ta có thể tự do sử dụng các phép toán tử bởi vì ngôn ngữ lập trình đã cung cấp sẵn cho ta, ví dụ:

int main()
{
	int a = 6, b = 9;
	cout << a + b;	// 15
	b = ++a;
	cout << "\na = " << a << " & b = " << b;	// a = 7, b = 7
	return 0;
}

- Vậy còn đối với những kiểu dữ liệu không có sẵn mà do ta tự tạo ra (PhanSo, SoPhuc, HocSinh) thì có thể làm được như vậy không?

int main()
{
	PhanSo a(1, 2), b(3, 4); // Khởi tạo
	cout << a + b; 
	b = ++a; 
	cout << "\na = " << a << " & b = " << b; 
	return 0;
}

-->> Sẽ được nếu như ta có định nghĩa cho nó

- Nếu yêu cầu đặt ra là tính tổng của 4 phân số a, b, c, d và kết quả trả ra là 1 phân số tổng, chúng ta có những cách làm thế nào để giải quyết yêu cầu?

Cách 1: Xây dựng phương thức cộng 2 phân số:
- link demo: https://www.ideone.com/YQQ60X


Cách 2: Chúng ta có thể làm việc linh động hơn bằng cách sử dụng toán tử sẽ được tìm hiểu ở bên dưới.

* TỔNG QUAN *
- Được biết đến với nhiều tên gọi khác nhau như:
	+ Chồng toán tử.
	+ Nạp chồng toán tử.
	+ Quá tải toán tử.
	+ Toán tử.

Toán tử là một phương thức đặc biệt của lớp đối tượng (hành động) nhằm thể hiện trực quan khi được gọi thực hiện.

- link code ví dụ: https://www.ideone.com/JegA9u

- Ta thử ví dụ khác: Xây dựng operator + với cách thức xử lý như sau: Cộng 1 phân số với 1 số nguyên và kết quả trả về là 1 phân số.
- link code: 



Qua ví dụ trên ta thấy việc sử dụng toán tử sẽ giúp cho công việc của chúng ta tiện lợi, dễ dàng hơn rất nhiều, chương trình nhìn gọn gàng, sáng sủa hơn.
Đối với các kiểu dữ liệu do người lập trình định nghĩa thêm, ta có thể định nghĩa chồng các toán tử cho các kiểu dữ liệu mới này khiến cho máy tính vẫn hiểu được như bình thường.

* THÊM *
- Bên C++ sẽ có hỗ trợ về operator
- Bên C# vẫn có hỗ trợ đa số, nhưng sẽ có bị cấm dùng 1 số thứ.
- Bên Java bị cấm tiệt hoàn toàn(sợ bug).


* NHẬN XÉT TỔNG QUAN VÀ TÌNH HUỐNG ĐẶT RA *
- Qua 2 ví dụ trên, ta thấy được cách xử lý theo thứ tự giữa 1 phân số (lớp đối tượng hiện tại) với 1 tham số đằng sau tùy ý 
(có thể là 1 phân số khác hoặc 1 số nguyên).
Vậy nếu yêu cầu của đề bây giờ thứ tự sẽ là số nguyên + phân số (số nguyên đứng trước rồi sau đó đến toán tử rồi mới
đến phân số) thì chương trình sẽ không thể chạy được, vậy phải giải quyết làm sao đây ?

-->> Muốn xử lý được trường hợp này thì ta phải khai báo toán tử không thuộc về lớp đối tượng nữa, rồi truyền vào theo thứ tự tham số đúng như đề yêu cầu.
-->> Nếu khai báo đối tượng không thuộc về lớp, mà muốn sử dụng được các thuộc tính của lớp (được cài đặt bởi từ khóa private) thì ta phải khai báo hàm bạn (friend) và để phương thức ở bên trong lớp. Còn nếu không dùng hàm bạn (friend) thì ta phải để phương thức ở bên ngoài lớp, truy xuất và xử lý thuộc tính nhờ vào Getter & Setter.


* Hàm bạn *
Từ khóa friend:
- Giúp cho hàm có thể truy xuất tới các thuộc tính của lớp và sử dụng chúng như bình thường mặc dù bản thân của hàm không thuộc về lớp đó. Lưu ý hàm friend sẽ khai báo ở bên trong lớp.

* Phân tích các trường hợp:
- TH1: Khai báo toán tử nằm bên trong lớp -->> dùng hàm bạn (friend). Định nghĩa toán tử: Số nguyên + phân số. Kết quả trả về là 1 phân số.



// viết code demo ra đây ...



- TH2: Khai báo toán tử nằm bên ngoài lớp -->> truy xuất nhờ Getter & Setter. Định nghĩa toán tử: Số nguyên - phân số. Kết quả trả về là 1 phân số


// viết code demo ra đây ...



* RÚT RA RỒI TÚM CÁI VÁY LẠI *
- Nếu toán tử chồng không là hàm thành viên của lớp thì nên sử dụng từ khóa friend thay vì truy xuất đến các thành phần dữ liệu 1 cách phức tạp.
