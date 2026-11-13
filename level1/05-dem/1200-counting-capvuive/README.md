# Đếm cặp vui vẻ

- Chương 5: Đếm phân phối
- Rating: 1200
- Nộp bài: `1200-counting-capvuive` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài I trong `bai-giang/Counting-tutorial.pdf`. Các bài A–K chưa có gói Polygon trong kho. Đây là phiên bản tự chứa dùng trong sách, giữ bài toán và ví dụ của tài liệu; giới hạn còn thiếu được chuẩn hóa tại đây, không khẳng định là đề OJ gốc. Rating là ước lượng nội bộ. J và K là bài mở rộng cần map (Chương 9).

## Đề bài

Đếm số cặp chỉ số i < j thỏa mãn a[i] - a[j] = i - j.

**Giới hạn dùng trong sách:** 1 <= n <= 10^6; 1 <= a[i] <= 10^6; chỉ số i bắt đầu từ 1.

**Input:** Dòng 1: n. Dòng 2: n số nguyên a[i].

**Output:** Số cặp thỏa mãn.

### Ví dụ

Input:

```text
6
2 3 4 3 6 7
```

Output:

```text
10
```
