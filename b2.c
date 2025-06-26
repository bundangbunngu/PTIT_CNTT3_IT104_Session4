#include <stdio.h>

int main() {
    int n;

    // Bước 1: Nhập số lượng phần tử
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Bước 2: Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bước 3: Tìm phần tử lớn nhất đầu tiên
    int max = arr[0];    // Giả sử phần tử đầu tiên là lớn nhất
    int index = 0;       // Lưu lại chỉ số của phần tử lớn nhất

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];    // Cập nhật giá trị lớn nhất
            index = i;       // Cập nhật chỉ số đầu tiên của phần tử lớn nhất
        }
    }

    // Bước 4: In ra kết quả
    printf("Chi so cua phan tu lon nhat dau tien la: %d\n", index);

    return 0;
}
