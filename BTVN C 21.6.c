#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the mo file bt01.txt de doc\n");
        return 1;
    }
    destFile = fopen("bt06.txt", "w");
    if (destFile == NULL) {
        printf("Khong the mo file bt06.txt de ghi\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    printf("Sao chep noi dung thanh cong tu bt01.txt sang bt06.txt\n");
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

