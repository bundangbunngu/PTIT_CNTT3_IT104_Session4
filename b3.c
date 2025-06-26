#include <stdio.h>

// Hàm đổi chỗ 2 số nguyên
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng theo thứ tự tăng dần (Bubble Sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return 1; // Tìm thấy phần tử
        } else if (arr[mid] < target) {
            left = mid + 1; // Tìm bên phải
        } else {
            right = mid - 1; // Tìm bên trái
        }
    }

    return 0; // Không tìm thấy
}

int main() {
    int n;

    // Bước 1: Nhập số lượng phần tử
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Bước 2: Nhập các phần tử của mảng
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bước 3: Sắp xếp mảng theo thứ tự tăng dần
    bubbleSort(arr, n);

    // Bước 4: In mảng sau khi sắp xếp
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Bước 5: Nhập giá trị cần tìm
    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    // Bước 6: Tìm kiếm bằng thuật toán nhị phân
    int found = binarySearch(arr, n, x);

    // Bước 7: In kết quả tìm kiếm
    if (found) {
        printf("Phan tu co trong mang\n");
    } else {
        printf("Phan tu khong co trong mang\n");
    }

    return 0;
}
