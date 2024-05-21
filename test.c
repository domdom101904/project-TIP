#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char buffer[100];

    // Writing to a file
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file, "Hello, this is a test.\n");
    fprintf(file, "This is another line.\n");
    fclose(file);

    // Reading from a file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}
