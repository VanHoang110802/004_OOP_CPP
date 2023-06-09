I. Phương thức khởi tạo (constructor)

* Sự cần thiết của constructor
- Chuyện gì sẽ xảy ra nếu như người lập trình sử dụng 1 đối tượng trong class trong khi đối tượng đó chưa được khởi tạo ra?
--> Các thành phần thuộc tính của đối tượng sẽ nhận giá trị rác từ vùng nhớ (do còn sót lại trước đó) hoặc phải nhận 1 giá trị không mong muốn nào đó.

-->> Mục đích của phương thức khởi tạo là nhằm khởi tạo các thành phần dữ liệu (thuộc tính) của đối tượng.

* Đặc điểm của các phương thức khởi tạo
1. Tên phương thức trùng với tên lớp và không trả về giá trị (nhưng có tham số)
2. Tự động được gọi thực thi ngay khi đối tượng của lớp đó được tạo lập ra (có bao nhiêu đối tượng được tạo thì sẽ có bấy nhiêu lần phương thức đó được thực thi)
3. Có thể có nhiều phương thức khởi tạo bên trong 1 lớp (cơ chế nập chồng overloading do phân biệt nhau qua tham số truyền vào)

* Các loại phương thức khởi tạo:

1/ Phương thức khởi tạo mặc định

2/ Phương thức khởi tạo có tham số truyền vào

3/ Phương thức khởi tạo sao chép

---

I. Phương thức khởi tạo mặc định
- Là phương thức khởi tạo không có tham số truyền vào
- Mặc định trình biên dịch sẽ phát sinh sẵn phương thức khởi tạo mặc định nếu như bản thân lớp đó không có bất kỳ phương thức khởi tạo nào khác.

Ví dụ: https://www.ideone.com/kUitrB

II. Phương thức khởi tạo có tham số truyền vào
- Là phương thức khởi tạo nhận tham số đầu vào "tùy ý" do người dùng định nghĩa, sẽ lấy đó làm dữ liệu tạo cho đối tượng.

Ví dụ: https://www.ideone.com/uPzw6y

III. Phương thức khởi tạo sao chép
- Là phương thức khởi tạo nhận tham số đầu vào là 1 đối tượng cùng thuộc lớp đó, nó truyền dữ liệu qua cho đối tượng đang xét để tạo lập nên đối tượng đó.

- Bản chất là C++ đã cung cấp sẵn cho ta phương thức khởi tạo sao chép và ta có thể sử dụng bình thường không cần phải tạo ra lại 1 phương thức khác, nhưng tùy trường hợp mà ta phải chủ động tạo ra phương thức khởi tạo sao chép chứ không thể sử dụng của hệ thống có sẵn.

Ví dụ: https://www.ideone.com/5WdSCb

IV. Phương thức phá hủy
* Sự cần thiết của DESTRUCTOR?
- Giúp dọn dẹp chương trình sau khi đối tượng đã thực thi xong.
- Công việc chủ yếu là thu hồi tất cả các tài nguyên đã cấp phát cho đối tượng trong giai đoạn lúc đối tượng còn đang thực thi.

* Đặc điểm của phương thức phá hủy:
1.Tên phương thức trùng với tên lớp và có dấu ~ đặt ở ngay phía trước.
2.Không có tham số đầu vào và cũng không có giá trị trả về.
3.Chỉ có duy nhất 1 phương thức phá hủy ở 1 lớp.
4.Ngầm định tự động chạy sau khi đối tượng hết phạm vi sử dụng.

-->> Phương thức phá hủy chỉ chạy duy nhất 1 lần trong
quá trình sống của 1 đối tượng

Ví dụ: https://www.ideone.com/ezBn3p

V. Những lưu ý tự rút:

1/ Khi ta khởi tạo 1 đối tượng thì phương thức thiết lập mặc định của đối tượng đó tự động được gọi lên do trình biên dịch hỗ trợ (mặc dù ta không cần khai báo), nhưng nếu trong bài ta có sử dụng đến các phương thức thiết lập khác như phương thức thiết lập nhận tham số đầu vào, phương thức thiết lập sao chép thì bắt buộc ta phải khai báo ra phương thức thiết lập mặc định vì lúc này trình biên dịch sẽ không hỗ trợ nữa, nếu không ta sẽ bị lỗi chương trình, cụ thể là: "no appropriate default constructor available".  -->> Phải có mặc định nhé.

2/ Nếu kiểu dữ liệu của các thành phần dữ liệu (thuộc tính) bên trong 1 lớp đối tượng không phải là kiểu dữ liệu con trỏ thì ta không cần phải cài đặt phương thức tạo lập sao chép cho lớp (C++ đã cung cấp sẵn cho ta phương thức tạo lập sao chép mặc định), tuy nhiên nếu đề bài yêu cầu thì cứ khai báo cũng chả chết. Còn nếu 1 lớp đối tượng có thuộc tính là con trỏ thì bắt buộc ta phải khai báo phương thức thiết lập sao chép cho lớp đó chứ không thể dùng phương thức tạo lập sao chép mặc định do C++ cung cấp (vì nó chỉ sao chép địa chỉ của con trỏ chứ không thật sự sao chép vùng nhớ mà chúng quản lý - dẫn đến 2 đối tượng cùng trỏ đến 1 địa chỉ vùng nhớ, nếu 1 trong 2 đối tượng thay đổi thì cả 2 đều bị thay đổi theo -> bị sai).

3/ Phương thức phá hủy tự động được gọi khi đối tượng hết phạm vi sử dụng, mặc định đối với những đối tượng không có thuộc tính là con trỏ thì không cần cài đặt cho phương thức phá hủy (để rỗng), còn các đối tượng có dùng con trỏ thì phải giải phóng vùng nhớ bên trong phương thức phá hủy.

VI. GETTER & SETTER

1/ GETTER
- Cho phép lấy dữ liệu hiện tại (thuộc tính) đang ở tầm vực private của đối tượng đem ra bên ngoài cho 1 số trường hợp cần
thiết. Lưu ý là chỉ lấy ra để so sánh, xem chứ không thay đổi lại được.

Ví dụ: https://www.ideone.com/PY0H6L

2/ SETTER 
- Cho phép từ bên ngoài lớp ta có thể truy xuất vào được thuộc tính nằm bên trong lớp đang bị giới hạn bởi tầm vực là private và sẽ thay đổi lại nó nếu ta muốn (Yên tâm là ta có sự kiểm soát rõ ràng)

Ví dụ: https://www.ideone.com/amcpQO
