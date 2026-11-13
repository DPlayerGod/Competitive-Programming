# SHOES SHOP

- Chương 5: Đếm phân phối
- Rating: 800
- Nộp bài: `800-counting-shoesshop` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài C trong `bai-giang/Counting-tutorial.pdf`. Các bài A–K chưa có gói Polygon trong kho. Đây là phiên bản tự chứa dùng trong sách, giữ bài toán và ví dụ của tài liệu; giới hạn còn thiếu được chuẩn hóa tại đây, không khẳng định là đề OJ gốc. Rating là ước lượng nội bộ. J và K là bài mở rộng cần map (Chương 9).

## Đề bài

Có n chiếc giày thuộc m loại. Hai chiếc cùng loại tạo thành một đôi. Tìm số đôi nhiều nhất, mỗi chiếc dùng tối đa một lần.

**Giới hạn dùng trong sách:** 1 <= m,n <= 10^6; 1 <= t[i] <= m.

**Input:** Dòng 1: m n (m đứng trước n). Dòng 2: n loại giày t[i].

**Output:** Một số nguyên: số đôi lớn nhất.

### Ví dụ

Input:

```text
5 6
1 3 3 4 5 4
```

Output:

```text
2
```
