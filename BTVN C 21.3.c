#include <stdio.h>

int main() {
    FILE *file;
    char chuoi[100];
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt de ghi them\n");
        return 1;
    }
    printf("Nhap chuoi bat ky de ghi them: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    fprintf(file, "%s", chuoi);
    fclose(file);
    printf("Chuoi da duoc ghi them vao file bt01.txt\n");

    return 0;
}

