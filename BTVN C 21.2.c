#include <stdio.h>

int main() {
    FILE *file;
    char firstChar;
    file = fopen("bt01.txt", "r");
    firstChar = fgetc(file);
    printf("Ky tu dau tien trong file: %c\n", firstChar);
    fclose(file);

    return 0;
}

