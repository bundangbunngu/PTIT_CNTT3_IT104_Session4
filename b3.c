#include <stdio.h>

int main() {
    int n, value;

    // Bước 1: Nhập số lượng phần tử
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Bước 2: Nhập từng phần tử của mảng
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bước 3: Nhập giá trị cần tìm
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    // Bước 4: Tìm và in ra các chỉ số của phần tử có giá trị bằng value
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            if (found == 0) {
                printf("Vi tri: ");
            }
            printf("%d", i);
            found = 1;
            if (i < n - 1) {
                printf(", ");
            }
        }
    }

    // Bước 5: Nếu không tìm thấy phần tử
    if (!found) {
        printf("Phan tu khong co trong mang");
    }

    printf("\n");
    return 0;
}
