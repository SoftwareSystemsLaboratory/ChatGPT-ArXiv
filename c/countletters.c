#include <stdio.h>
#include <ctype.h>

#define MAX_FILENAME_LEN 100
#define NUM_LETTERS 26

int main() {
    char filename[MAX_FILENAME_LEN];
    printf("Enter the name of the file to count the letter frequency: ");
    scanf("%s", filename);

    int freqs[NUM_LETTERS] = {0};
    FILE* fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int c;
    while ((c = fgetc(fp)) != EOF) {
        if (isalpha(c)) {
            c = tolower(c);
            freqs[c - 'a']++;
        }
    }

    fclose(fp);

    printf("Letter frequency:\n");
    for (int i = 0; i < NUM_LETTERS; i++) {
        printf("%c: %d\n", 'a' + i, freqs[i]);
    }

    return 0;
}
