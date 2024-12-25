#include <stdio.h>

int main() {
    FILE *file;
    char line[100];
    file = fopen("bt01.txt", "r");
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong file: %s", line);
    } else {
        printf("Khong the doc dong dau tien hoac file rong\n");
    }
    fclose(file);

    return 0;
}

