#include <stdio.h>

int main() {
    FILE *s1, *s2;
    char buffer[1024];

    // Open the source file in read mode
    s1 = fopen("s1.txt", "r");
    if (s1 == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    s2 = fopen("s2.txt", "w");
    if (s2 == NULL) {
        printf("Error opening destination file.\n");
        fclose(s1);
        return 1;
    }

    // Read a line from the source file and write it to the destination file
    while (fscanf(s1, "%[^\n]\n", buffer) == 1) {
        fprintf(s2, "%s\n", buffer);
    }

    // Close both files
    fclose(s1);
    fclose(s2);

    printf("File copied successfully.\n");
    return 0;
}

