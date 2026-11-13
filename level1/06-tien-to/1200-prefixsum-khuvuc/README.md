# Khu vực

- Chương 6: Mảng tiền tố
- Rating: 1200
- Nộp bài: `1200-prefixsum-khuvuc` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài I trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Mỗi người có thẻ $a_i$, vào được khu vực mang số là ước của $a_i$. Đổi tối đa một thẻ thành số nguyên dương bất kỳ. Tìm khu vực lớn nhất mọi người cùng vào được.

**Giới hạn dùng trong sách:** $2\le n\le10^5$, $1\le a_i\le10^9$

**Input:** n, rồi n số thẻ.

**Output:** Số khu vực lớn nhất.

### Ví dụ

Input:

```text
4
6 10 15 30
```

Output:

```text
5
```
