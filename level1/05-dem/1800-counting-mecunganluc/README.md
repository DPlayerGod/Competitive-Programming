# Mê cung An lực

- Chương 5: Đếm phân phối
- Rating: 1800
- Nộp bài: `1800-counting-mecunganluc` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài J trong `bai-giang/Counting-tutorial.pdf`. Các bài A–K chưa có gói Polygon trong kho. Đây là phiên bản tự chứa dùng trong sách, giữ bài toán và ví dụ của tài liệu; giới hạn còn thiếu được chuẩn hóa tại đây, không khẳng định là đề OJ gốc. Rating là ước lượng nội bộ. J và K là bài mở rộng cần map (Chương 9).

## Đề bài

Trên bảng n x n, mỗi tháp có ma lực x. Tổng ma lực hàng r là Row[r], tổng ma lực cột c là Col[c]. Ô (r,c) nhiễu loạn khi Row[r]+Col[c] khác 0. Sau mỗi lần dời tháp, đếm số ô nhiễu loạn.

**Giới hạn dùng trong sách:** 1 <= n <= 2*10^9; 1 <= k <= 200000; 0 <= p <= 200000; |x| <= 10^9. Các tháp ban đầu ở các ô khác nhau. Mỗi lần dời có một tháp ở ô nguồn, ô đích trống hoặc trùng ô nguồn.

**Input:** Dòng 1: n k p. k dòng tiếp theo: r c x. p dòng cuối: r1 c1 r2 c2 (dời nguyên tháp và giữ nguyên ma lực).

**Output:** p dòng: số ô nhiễu loạn sau từng lần dời. Không in đáp án trước truy vấn đầu tiên.

### Ví dụ

Input:

```text
3 1 2
2 2 5
2 2 1 3
1 3 1 3
```

Output:

```text
5
5
```
