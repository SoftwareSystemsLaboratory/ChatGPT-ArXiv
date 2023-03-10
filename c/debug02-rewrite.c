#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr = fopen("filename", "r");
    if (fptr == NULL) {
        return EXIT_FAILURE;
    }
    int ch;
    int count[6] = {0};
    while ((ch = fgetc(fptr)) != EOF) {
        if (ch >= 'A' && ch <= 'F') {
            count[ch - 'A']++;
        }
    }
    fclose(fptr);
    return EXIT_SUCCESS;
}
