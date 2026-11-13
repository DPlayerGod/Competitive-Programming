# Cáp treo Thẳng Hàng

- Chương 5: Đếm phân phối
- Rating: 1600
- Nộp bài: `1600-counting-captreo` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài K trong `bai-giang/Counting-tutorial.pdf`. Các bài A–K chưa có gói Polygon trong kho. Đây là phiên bản tự chứa dùng trong sách, giữ bài toán và ví dụ của tài liệu; giới hạn còn thiếu được chuẩn hóa tại đây, không khẳng định là đề OJ gốc. Rating là ước lượng nội bộ. J và K là bài mở rộng cần map (Chương 9).

## Đề bài

Tháp i ở vị trí i, cao h[i]. Một cặp i<j có cáp khi |h[j]-h[i]|=j-i. Sau mỗi lần gán h[p]=v, đếm số cặp có cáp.

**Giới hạn dùng trong sách:** 1 <= n <= 200000; 0 <= q <= 200000; 1 <= h[i],v <= 10^9; 1 <= p <= n.

**Input:** Dòng 1: n q. Dòng 2: n chiều cao h[i]. q dòng cuối: p v.

**Output:** q dòng: số cặp có cáp sau mỗi lần đổi chiều cao. Không in đáp án ban đầu.

### Ví dụ

Input:

```text
5 2
3 4 2 5 1
3 6
5 7
```

Output:

```text
3
4
```
