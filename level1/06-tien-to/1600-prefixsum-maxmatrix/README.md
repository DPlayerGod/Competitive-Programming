# Ma trận con tổng lớn nhất

- Chương 6: Mảng tiền tố
- Rating: 1600
- Nộp bài: `1600-prefixsum-maxmatrix` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài P trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Tìm tổng lớn nhất của một hình chữ nhật liên tục, khác rỗng trong bảng.

**Giới hạn dùng trong sách:** $1\le n,m\le500$, $|a_{ij}|\le10^9$

**Input:** n m, rồi n hàng số.

**Output:** Tổng lớn nhất.

### Ví dụ

Input:

```text
2 3
1 -4 3
2 2 -3
```

Output:

```text
4
```
