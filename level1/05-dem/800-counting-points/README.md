# POINTS

- Chương 5: Đếm phân phối
- Rating: 800
- Nộp bài: `800-counting-points` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài A trong `bai-giang/Counting-tutorial.pdf`. Các bài A–K chưa có gói Polygon trong kho. Đây là phiên bản tự chứa dùng trong sách, giữ bài toán và ví dụ của tài liệu; giới hạn còn thiếu được chuẩn hóa tại đây, không khẳng định là đề OJ gốc. Rating là ước lượng nội bộ. J và K là bài mở rộng cần map (Chương 9).

## Đề bài

Có n học sinh với điểm a[i]. Mỗi học sinh trong danh sách b làm tất cả học sinh khác được cộng 1 điểm. In điểm cuối cùng của từng học sinh.

**Giới hạn dùng trong sách:** 1 <= n <= 200000; 0 <= k <= n; 0 <= a[i] <= 10^9; các b[i] khác nhau và thuộc [1,n].

**Input:** Dòng 1: n k. Dòng 2: n điểm a[i]. Tiếp theo là k chỉ số b[i] (có thể không có nếu k=0).

**Output:** n điểm cuối cùng theo thứ tự học sinh.

### Ví dụ

Input:

```text
6 4
3 5 3 1 7 8
3 4 5 1
```

Output:

```text
6 9 6 4 10 12
```
