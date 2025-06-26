#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
    int *arr = NULL;

    do {
        printf("Nhap so luong phan tu (0 < n <= 1000): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 1000);

    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong du bo nho\n");
        return 1;
    }

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            foundIndex = i;
        }
    }

    if (foundIndex == -1) {
        printf("Khong tim thay phan tu\n");
    } else {
        printf("%d\n", foundIndex);
    }

    free(arr);

    return 0;
}
