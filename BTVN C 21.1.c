#include <stdio.h>

int main() {
    char chuoi[100];
    FILE *fptr;
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    fptr = fopen("bt01.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file de ghi.\n");
        return 1;
    }
    fprintf(fptr, "%s", chuoi);
    fclose(fptr);
    fptr = fopen("bt01.txt", "r");
    fgets(chuoi, sizeof(chuoi), fptr);
    printf("Thong tin trong file: %s", chuoi);
    fclose(fptr);

    return 0;
}

