#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
};

int main() {
    FILE *file;
    int numStudents;
    struct SinhVien sv;
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file students.txt de ghi\n");
        return 1;
    }
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &numStudents);
    getchar();
    for (int i = 0; i < numStudents; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        sv.id = i + 1;
        printf("Nhap ten sinh vien: ");
        fgets(sv.name, sizeof(sv.name), stdin);
        sv.name[strcspn(sv.name, "\n")] = '\0';
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sv.age);
        getchar();
        fprintf(file, "%d %s %d\n", sv.id, sv.name, sv.age);
    }
    fclose(file);

    printf("Thong tin sinh vien da duoc luu vao file students.txt\n");

    return 0;
}

