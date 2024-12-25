#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
};
int main() {
    FILE *file;
    struct SinhVien sv[100];
    int numOfStudents = 0;
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file students.txt de doc\n");
        return 1;
    }
    while (fscanf(file, "%d %s %d", &sv[numOfStudents].id, sv[numOfStudents].name, &sv[numOfStudents].age) != EOF) {
        numOfStudents++;
    }
    fclose(file);
    printf("Thong tin cac sinh vien:\n");
    for (int i = 0; i < numOfStudents; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("\n");
    }

    return 0;
}

