# Mảng con có tổng lớn nhất

- Chương 6: Mảng tiền tố
- Rating: 1100
- Nộp bài: `1100-prefixsum-maxsum` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài B trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Tìm tổng lớn nhất của một đoạn liên tiếp khác rỗng.

**Giới hạn dùng trong sách:** $1\le n\le10^5$, $|a_i|\le10^9$

**Input:** n, rồi n số.

**Output:** Tổng lớn nhất.

### Ví dụ

Input:

```text
5
1 3 -2 3 -5
```

Output:

```text
5
```
