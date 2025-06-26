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

    // Bước 3: Duyệt và kiểm tra các cặp đối xứng
    int found = 0;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
            printf("Cap doi xung: (%d, %d)\n", arr[i], arr[n - 1 - i]);
            found = 1;
        }
    }

    // Bước 4: Nếu không có cặp nào đối xứng
    if (!found) {
        printf("Khong co phan tu doi xung\n");
    }

    return 0;
}
