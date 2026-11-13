# ICE SHOP

- Chương 5: Đếm phân phối
- Rating: 800
- Nộp bài: `800-counting-iceshop` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài B trong `bai-giang/Counting-tutorial.pdf`. Các bài A–K chưa có gói Polygon trong kho. Đây là phiên bản tự chứa dùng trong sách, giữ bài toán và ví dụ của tài liệu; giới hạn còn thiếu được chuẩn hóa tại đây, không khẳng định là đề OJ gốc. Rating là ước lượng nội bộ. J và K là bài mở rộng cần map (Chương 9).

## Đề bài

Loại kem i ban đầu có a[i] chiếc. Các khách lần lượt yêu cầu loại b[j]. Bán một chiếc nếu còn hàng; nếu hết thì không bán.

**Giới hạn dùng trong sách:** 1 <= n,m <= 10^6; 0 <= a[i] <= 10^9; 1 <= b[j] <= n.

**Input:** Dòng 1: n m. Dòng 2: n số lượng ban đầu. Tiếp theo là m loại kem khách yêu cầu.

**Output:** m dòng YES hoặc NO: khách tương ứng có mua được kem hay không.

### Ví dụ

Input:

```text
5 4
1 2 3 4 5
4 2 2 2
```

Output:

```text
YES
YES
YES
NO
```
