# Truy vấn bậc thang

- Chương 6: Mảng tiền tố
- Rating: 1300
- Nộp bài: `1300-prefixsum-bacthang` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài K trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Mỗi truy vấn $[l,r]$ yêu cầu tính $a_l+2a_{l+1}+\cdots+(r-l+1)a_r$.

**Giới hạn dùng trong sách:** $1\le n,q\le10^5$, $|a_i|\le10^6$

**Input:** n q, n số, rồi q cặp l r.

**Output:** q kết quả.

### Ví dụ

Input:

```text
5 2
1 3 -2 3 4
2 4
1 5
```

Output:

```text
8
33
```
