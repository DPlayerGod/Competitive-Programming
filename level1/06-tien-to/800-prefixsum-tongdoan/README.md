# Tổng tiền tố

- Chương 6: Mảng tiền tố
- Rating: 800
- Nộp bài: `800-prefixsum-tongdoan` (chưa có link nộp bài)

Lời giải: [solution.cpp](solution.cpp)

## Nguồn và phiên bản

Bài A trong `bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_1D.pdf; bai-giang/LỚP_HỌC_VUI_VẺ___Prefix_sum_2D.pdf`. Giữ 14 bài 1D (A–M và MAXSUM), ba bài N–P của PDF 2D. Thêm bốn bài Polygon bằng đúng mã gói, không đồng nhất bài hỏi tổng hình thoi trong PDF với bài chọn tâm tốt nhất trên Polygon. Bài cũ thiếu định dạng hoặc giới hạn được chuẩn hóa cho sách, rating là ước lượng nội bộ. I dùng n>=2 vì n=1 và đổi thẻ tùy ý không có tối ưu hữu hạn. O yêu cầu bốn mảnh không rỗng, cắt bên trong bảng. Không tự gán điểm subtask cho các bài PDF không có bảng điểm.

## Đề bài

Cho mảng $a$ và các truy vấn $[l,r]$. In tổng các phần tử trong mỗi đoạn.

**Giới hạn dùng trong sách:** $1\le n,q\le10^5$, $|a_i|\le10^9$

**Input:** Dòng đầu: n q; dòng sau: n số; tiếp theo q cặp l r.

**Output:** q tổng, mỗi tổng một dòng.

### Ví dụ

Input:

```text
5 3
1 3 -2 3 4
2 3
1 4
3 5
```

Output:

```text
1
5
5
```
