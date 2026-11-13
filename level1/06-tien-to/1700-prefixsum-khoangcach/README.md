# Khoảng cách nhỏ nhất

- Chương 6: Mảng tiền tố
- Rating: 1700
- Nộp bài: `1700-prefixsum-khoangcach` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài M trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Có $n$ nhà trên vòng tròn, nhà $i$ có $a_i$ người. Chọn nhà $x$ để tổng $\sum_i a_i\min(|i-x|,n-|i-x|)$ nhỏ nhất. In tổng nhỏ nhất.

**Giới hạn dùng trong sách:** $1\le n\le10^5$, $0\le a_i\le10^5$

**Input:** n, rồi n số người.

**Output:** Chi phí nhỏ nhất.

### Ví dụ

Input:

```text
4
1 0 2 0
```

Output:

```text
2
```
