# Dãy con lớn nhất trên vòng tròn

- Chương 6: Mảng tiền tố
- Rating: 1500
- Nộp bài: `1500-prefixsum-maxvong` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài MAXSUM trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Tìm tổng lớn nhất của một đoạn khác rỗng trên vòng tròn. Mỗi phần tử được chọn nhiều nhất một lần.

**Giới hạn dùng trong sách:** $1\le n\le10^6$, $|a_i|\le10^3$

**Input:** n, rồi n phần tử; in một kết quả.

**Output:** Kết quả của yêu cầu đề bài.

### Ví dụ

Input:

```text
10
5 -2 -20 6 3 -4 3 2 5 -4
```

Output:

```text
16
```
