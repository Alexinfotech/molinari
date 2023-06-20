#include <stdio.h>

int main() {
    const char* filename = "test.txt";
    FILE* inputFile = fopen(filename, "r");

    if (!inputFile) {
        printf("Impossibile aprire il file: %s\n", filename);
        return 1;
    }

    int ch = fgetc(inputFile);
    fclose(inputFile);

    if (ch == EOF) {
        printf("Il file è vuoto: %s\n", filename);
    } else {
        printf("Il file non è vuoto: %s\n", filename);
    }

    return 0;
}
