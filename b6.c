#include <stdio.h>
#include <string.h>

// Bước 1: Khai báo cấu trúc Student
struct Student {
    int id;
    char name[100];
    int age;
};

int main() {
    struct Student students[5];
    int i, searchId;
    int found = 0;

    // Bước 2: Nhập thông tin cho 5 sinh viên
    printf("Nhap thong tin cho 5 sinh vien:\n");
    for (i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Ten: ");
        scanf(" %[^\n]", students[i].name);  // Đọc chuỗi có khoảng trắng
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }

    // Bước 3: Nhập ID cần tìm
    printf("Nhap ID can tim: ");
    scanf("%d", &searchId);

    // Bước 4: Tìm kiếm tuyến tính
    for (i = 0; i < 5; i++) {
        if (students[i].id == searchId) {
            found = 1;
            printf("\n{ id: %d, name: \"%s\", age: %d }\n", students[i].id, students[i].name, students[i].age);
            break;
        }
    }

    // Bước 5: Nếu không tìm thấy
    if (!found) {
        printf("\nSinh vien khong ton tai\n");
    }

    return 0;
}
