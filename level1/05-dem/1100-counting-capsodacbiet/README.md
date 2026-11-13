# Cặp số đặc biệt

- Chương 5: Đếm phân phối
- Rating: 1100
- Nộp bài: `1100-counting-capsodacbiet` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài H trong `bai-giang/Counting-tutorial.pdf`. Các bài A–K chưa có gói Polygon trong kho. Đây là phiên bản tự chứa dùng trong sách, giữ bài toán và ví dụ của tài liệu; giới hạn còn thiếu được chuẩn hóa tại đây, không khẳng định là đề OJ gốc. Rating là ước lượng nội bộ. J và K là bài mở rộng cần map (Chương 9).

## Đề bài

Đếm số cặp chỉ số i < j thỏa mãn a[i] + a[j] = S. Các cặp được phép dùng chung chỉ số.

**Giới hạn dùng trong sách:** 1 <= n <= 10^6; 1 <= a[i] <= 10^6; 1 <= S <= 2*10^6.

**Input:** Dòng 1: n S. Dòng 2: n số nguyên a[i].

**Output:** Số cặp thỏa mãn.

### Ví dụ

Input:

```text
7 6
1 2 4 3 4 5 3
```

Output:

```text
4
```
