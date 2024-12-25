#include <stdio.h>

int main() {
    FILE *file;
    int numLines;
    char line[100];
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file bt05.txt de ghi\n");
        return 1;
    }
    printf("Nhap so dong: ");
    scanf("%d", &numLines);
    getchar();
    for (int i = 0; i < numLines; i++) {
        printf("Nhap noi dung dong thu %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    printf("\nNoi dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);

    return 0;
}

