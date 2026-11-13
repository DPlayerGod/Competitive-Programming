# DIVIDE LAND

- Chương 6: Mảng tiền tố
- Rating: 1200
- Nộp bài: `1200-prefixsum-divideland` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài O trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Bảng vuông $0/1$ là mảnh đất. Cắt một đường ngang và một đường dọc giữa các hàng/cột để được bốn mảnh không rỗng. Tối thiểu hóa hiệu giữa số cây lớn nhất và nhỏ nhất trong bốn mảnh.

**Giới hạn dùng trong sách:** $2\le n\le500$

**Input:** n, rồi bảng n x n; in độ chênh lệch nhỏ nhất.

**Output:** Kết quả của yêu cầu đề bài.

### Ví dụ

Input:

```text
4
1 0 1 0
0 1 0 1
1 1 0 0
0 0 1 1
```

Output:

```text
0
```
