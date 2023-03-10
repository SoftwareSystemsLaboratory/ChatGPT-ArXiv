#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr = fopen("filename", "r");
    if (fptr == NULL) {
        return EXIT_FAILURE;
    }
    int ch = fgetc(fptr);
    int count[6] = {0};
    if (ch == 'A') {
        count[0]++;
    }
    else if (ch == 'B') {
        count[1]++;
    }
    else if (ch == 'C') {
        count[2]++;
    }
    else if (ch == 'D') {
        count[3]++;
    }
    else if (ch == 'E') {
        count[4]++;
    }
    else if (ch == 'F') {
        count[5]++;
    }
    fclose(fptr);
    return EXIT_SUCCESS;
}
