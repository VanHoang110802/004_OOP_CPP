I. GIỚI THIỆU TỔNG QUAN VỀ LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG
* Lập trình có 3 giai đoạn, thời kì: Lập trình tuyến tính, lập trình hướng thủ tục và lập trình hướng đối tượng.

1. Lập trình tuyến tính:
- Là lập trình chỉ được viết hết trong ở hàm main(chính).
- Hàm main(chính) là xương sống của chương trình.

2. Lập trình hướng thủ tục
- Là lập trình lấy hành động làm trung tâm.
- Có phân chương trình thành các công việc nhỏ hơn để dễ dàng giải quyết(là chương trình con - hàm con)
- Hàm là xương sống của toàn bộ chương trình.

3. Lập trình hướng đối tượng
- Là lập trình lấy dữ liệu làm trung tâm.
- Là phương pháp lập trình dựa trên kiến trúc đối tượng(object) và lớp(class).
  
  3.1. Đối tượng(object):
  - Là thực thể thể hiện của 1 lớp. Trong đối tượng có 2 thành phần quan trọng:
  + Thuộc tính(Attribute): tính chất, dữ liệu của đối tượng.
  + Phương thức(Method): các hành động liên quan đến đối tượng đó.

  3.2. Lớp(class):
  - Là mô hình hóa nhóm các đối tượng cùng loại.

4. Tầm vực trong hướng đối tượng (OOP)
- Public: các thuộc tính hoặc các phương thức có thể truy xuất ra bên ngoài class.
- Private: các thuộc tính các phương thức không thể truy xuất ra bên ngoài class, nó chỉ được gọi trong phạm vi class.
- Protected: các thuộc tính các phương thức không thể truy xuất ra bên ngoài class, nó chỉ được gọi trong class và class kế thừa.

II. CÁC BƯỚC LẬP TRÌNH TRONG HƯỚNG ĐỐI TƯỢNG:
- Bước 1: Xác định các lớp và đối tượng có trong đề bài(Giấy)
	+ Các thuộc tính
	+ Các phương thức
- Bước 2: Khai báo các lớp và đối tượng (Máy)
- Bước 3: Khai báo các phương thức.
- Bước 4: Cài đặt các xử lý của các phương thức đó.
- Bước 5: Gọi các phương thức xử lý trong hàm main.

III. NHỮNG TÍNH CHẤT CỦA HƯỚNG ĐỐI TƯỢNG:
1. Đóng gói:
- Các đối tượng khác nhau của mỗi chương trình sẽ cố gắng tương tác với nhau một cách tự động. Nếu một lập trình viên muốn ngăn cản sự tương tác giữa các đối tượng thì phải đóng gói các đối tượng vào những class riêng biệt. Thông qua đóng gói, các class sẽ không thay đổi và tương tác với những biến hay hàm cụ thể của một đối tượng.

- Hãy nghĩ đến một vỉ thuốc. Trong vỉ thuốc này có các viên thuốc, mỗi viên thuốc lại được đóng gói bằng bao phim. Tương tự như vậy, đóng gói hoạt động theo hướng kỹ thuật số, tạo nên một hàng rào bảo vệ. Hàng rào này ngăn cách đối tượng với những mã code xung quanh. Lập trình viên có thể tạo một bản sao của đối tượng những phần khác của chương trình hay những chương trình khác.

2. Trừu tượng:
- Tính trừu tượng giống như một phiên bản mở rộng của tính đóng gói vì nó giấu đi những tính chất và phương thức cụ thể để giao thức của các đối tượng đơn giản hơn. Lập trình viên sử dụng tính trừu tượng cho vài lý do có ích khác. Nhìn chung, tính trừu tượng giúp cô lập ảnh hưởng của sự thay đổi mã code. Mục tiêu là nếu có sai sót gì xảy ra, ảnh hưởng của sự thay đổi là không nhiều.

- Một ví dụ đơn giản, thực tế là chiếc điện thoại của bạn. Điện thoại rất phức tạp, nhưng với người dùng, điện thoại lại rất dễ dàng. Bạn sử dụng một vài nút nhất định để tương tác với điện thoại của mình. Nhưng cụ thể chiếc điện thoại hoạt động như thế nào thì bạn không biết, vì các chi tiết hoạt động đã bị giấu đi. Khi có sự thay đổi, như hệ điều hành cập nhật, cách bạn sử dụng điện thoại gần như không đổi.

3. Kế thừa:
- Tính đóng gói và tính trừu tượng giúp chúng ta phát triển và duy trì một cơ sở mã lớn. Nhưng một vấn đề của OOP là các đối tượng thường rất giống nhau. Chúng có chung logic thực hiện, nhưng không thật sự giống nhau. 

- Để tái sử dụng logic chung này và trích những logic cụ thể vào một class riêng, bạn có thể sử dụng tính kế thừa. Có nghĩa là bạn tạo ra một lớp con từ lớp cha. Bằng cách này, chúng ta tạo được một trật tự. Lớp con sẽ sử dụng tất cả các field và method của lớp cha và có thể có thêm những phần riêng biệt của nó.

4. Đa hình:
- Giả sử chúng ta đã có một lớp cha và một vài lớp con kế thừa. Đôi khi chúng ta muốn sử dụng một tập hợp, ví dụ một danh sách các lớp con này. Hay chúng ta có một method riêng cho class cha, nhưng nếu ta cũng muốn sử dụng method này cho class con?

- Tính đa hình đưa ra cách sử dụng một lớp con giống hệt như lớp cha để không có sự nhầm lẫn, bối rối nào giữa các dạng khác nhau. Nhưng mỗi lớp con vẫn giữ nguyên method của mình. Điều này thường xảy ra khi tái sử dụng một giao thức lớp cha. Nó đưa ra những method phổ biến, rồi mỗi lớp con thực hiện phiên bản method riêng của nó.
