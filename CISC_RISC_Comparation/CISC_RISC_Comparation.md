# BÁO CÁO: SO SÁNH KIẾN TRÚC CISC VÀ RISC

## 1. Giới thiệu khái niệm cơ bản

Trong lĩnh vực kiến trúc máy tính, hai hướng phát triển chủ đạo được nhắc đến nhiều nhất là **CISC (Complex Instruction Set Computer)** và **RISC (Reduced Instruction Set Computer)**.  
Hai kiến trúc này phản ánh hai triết lý thiết kế phần cứng khác nhau: một bên tập trung vào **độ phức tạp và khả năng mạnh mẽ của tập lệnh**, trong khi bên kia hướng đến **đơn giản hóa và tối ưu tốc độ thực thi**.

**Kiến trúc CISC** được thiết kế nhằm giảm số lượng lệnh trong chương trình bằng cách cho phép mỗi lệnh thực hiện nhiều thao tác phức tạp (ví dụ: truy xuất bộ nhớ, tính toán, và cập nhật thanh ghi trong cùng một lệnh). Một CPU CISC có thể hiểu và thực thi trực tiếp các lệnh bậc cao gần giống ngôn ngữ lập trình.  Các bộ vi xử lý **Intel x86** là ví dụ điển hình của kiến trúc CISC.

Ngược lại, **kiến trúc RISC** được phát triển với mục tiêu đơn giản hóa phần cứng bằng cách giới hạn tập lệnh ở mức tối thiểu, trong đó mỗi lệnh thường chỉ thực hiện một tác vụ đơn giản và có độ dài cố định. Mục tiêu chính của RISC là tăng **hiệu suất xử lý trên mỗi chu kỳ xung nhịp** nhờ thiết kế pipeline hiệu quả hơn.  
**ARM, MIPS và RISC-V** là những đại diện tiêu biểu của họ vi xử lý RISC.

## 2. Ưu điểm và nhược điểm của từng kiến trúc

### 2.1. Kiến trúc CISC

**Ưu điểm:**
- Tập lệnh phong phú, giúp mã máy ngắn gọn và dễ biên dịch từ ngôn ngữ bậc cao.  
- Thực hiện được nhiều thao tác phức tạp chỉ trong một lệnh, giảm số lệnh cần chạy.  
- Phù hợp với các hệ thống máy tính để bàn, máy chủ hoặc môi trường yêu cầu tương thích ngược với phần mềm cũ.

**Nhược điểm:**
- Cấu trúc phần cứng phức tạp, cần nhiều transistor để giải mã lệnh.  
- Khó tối ưu pipeline do mỗi lệnh có độ dài và thời gian thực thi khác nhau.  
- Tiêu thụ điện năng cao hơn, tốc độ xung nhịp thường bị giới hạn do khâu giải mã phức tạp.

### 2.2. Kiến trúc RISC

**Ưu điểm:**
- Thiết kế phần cứng đơn giản, dễ mở rộng và tối ưu hóa pipeline.  
- Mỗi lệnh được thực thi trong một chu kỳ xung nhịp → hiệu suất xử lý cao.  
- Tiêu thụ điện năng thấp, phù hợp với các thiết bị di động và hệ thống nhúng.  
- Hỗ trợ thiết kế song song (parallel) và pipeline hiệu quả hơn.

**Nhược điểm:**
- Chương trình có thể dài hơn vì cần nhiều lệnh đơn giản để thực hiện cùng một tác vụ.  
- Việc lập trình ở mức hợp ngữ trở nên khó khăn hơn do tính “thô” của tập lệnh.  
- Cần bộ nhớ lớn hơn để lưu trữ chương trình.

## 3. So sánh kiến trúc CISC và RISC

| Tiêu chí                    | CISC (Complex Instruction Set Computer)                              | RISC (Reduced Instruction Set Computer)                        |
|-----------------------------|----------------------------------------------------------------------|----------------------------------------------------------------|
| **Cấu trúc tập lệnh**       | Phức tạp, có hàng trăm lệnh; mỗi lệnh có thể thực hiện nhiều tác vụ. | Đơn giản, ít lệnh; mỗi lệnh chỉ thực hiện một thao tác cơ bản. |
| **Tốc độ xử lý**            | Thấp hơn do lệnh dài, khó pipeline.                                  | Cao hơn, nhờ pipeline hiệu quả và độ dài lệnh cố định.         |
| **Kích thước chương trình** | Nhỏ hơn (ít lệnh hơn để làm cùng công việc).                         | Lớn hơn (nhiều lệnh đơn giản để đạt cùng kết quả).             |
| **Độ phức tạp phần cứng**   | Cao — cần bộ giải mã lệnh phức tạp và nhiều transistor.              | Thấp — dễ thiết kế, dễ mở rộng pipeline và song song hóa.      |
| **Ứng dụng thực tế**        | Intel x86, AMD Ryzen, Pentium, Core i-series.                        | ARM Cortex, MIPS, RISC-V, Apple Silicon (ARM-based).           |

## 4. Ứng dụng thực tế

Hiện nay, **kiến trúc CISC** vẫn chiếm ưu thế trong các máy tính cá nhân, laptop và máy chủ, nhờ khả năng tương thích ngược, hỗ trợ tốt các hệ điều hành lớn (Windows, Linux) và phần mềm truyền thống. Bộ vi xử lý **Intel Core i9, AMD Ryzen** là ví dụ điển hình.

Ngược lại, **kiến trúc RISC**, đặc biệt là họ **ARM**, đã trở thành tiêu chuẩn trong các thiết bị di động, hệ thống nhúng và IoT. Lý do là vì ARM mang lại hiệu năng tốt trên mỗi watt điện tiêu thụ, đồng thời có khả năng tích hợp linh hoạt vào SoC (System-on-Chip).  
Các chip **Raspberry Pi, STM32, ESP32, Apple M1/M2 (ARM-based)** đều minh chứng cho sự thành công của kiến trúc RISC trong kỷ nguyên điện toán tiết kiệm năng lượng.

## 5. Quan điểm cá nhân

Trong bối cảnh phát triển **hệ thống nhúng hiện nay**, em cho rằng **kiến trúc RISC là lựa chọn phù hợp hơn**.  
Các hệ thống nhúng — từ vi điều khiển ô tô, robot, đến thiết bị IoT đều đòi hỏi các tiêu chí sau:
- Tiêu thụ điện năng thấp.  
- Tốc độ phản hồi nhanh, ổn định.  
- Tính linh hoạt trong tùy biến phần cứng.

RISC đáp ứng trọn vẹn các yêu cầu đó nhờ cấu trúc lệnh đơn giản, khả năng pipeline hiệu quả và tiêu thụ năng lượng tối thiểu. 
Ngược lại, CISC vẫn giữ vai trò mạnh mẽ trong môi trường máy tính truyền thống, nhưng không còn tối ưu cho các hệ thống nhúng quy mô nhỏ, nơi yếu tố hiệu năng trên năng lượng (performance-per-watt) là ưu tiên hàng đầu.

