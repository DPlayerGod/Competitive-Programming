# Tổng tiền tố 2 chiều

- Chương 6: Mảng tiền tố
- Rating: 1000
- Nộp bài: `1000-prefixsum-tonghaichieu` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài N trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Cho bảng $n\times m$ và $q$ truy vấn. Với mỗi hình chữ nhật có góc trái trên $(x,y)$, góc phải dưới $(u,v)$, in tổng các ô bên trong, kể cả biên.

**Giới hạn dùng trong sách:** $1\le n,m\le1000$, $1\le q\le10^5$, $|a_{ij}|\le10^9$

**Input:** n m q; n hàng số; q dòng x y u v, với x<=u, y<=v.

**Output:** q tổng.

### Ví dụ

Input:

```text
2 3 2
1 4 3
2 2 3
1 1 2 2
2 1 2 3
```

Output:

```text
9
7
```
