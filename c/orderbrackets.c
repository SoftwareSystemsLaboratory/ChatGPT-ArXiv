#include <stdio.h>

void generate_bracket_arrangements(int n, char* current_arrangement, int open_brackets, int close_brackets) {
    // If we have generated n pairs of brackets, print the arrangement
    if (open_brackets == n && close_brackets == n) {
        printf("%s\n", current_arrangement);
        return;
    }
    
    // If we have not yet generated n pairs of brackets, recursively generate the next bracket in the arrangement
    if (open_brackets < n) {
        current_arrangement[open_brackets + close_brackets] = '[';
        generate_bracket_arrangements(n, current_arrangement, open_brackets + 1, close_brackets);
    }
    if (close_brackets < open_brackets) {
        current_arrangement[open_brackets + close_brackets] = ']';
        generate_bracket_arrangements(n, current_arrangement, open_brackets, close_brackets + 1);
    }
}

int main() {
    int n;
    printf("Enter the number of pairs of square brackets: ");
    scanf("%d", &n);
    
    char current_arrangement[2 * n + 1];  // Add 1 for null terminator
    current_arrangement[2 * n] = '\0';    // Null terminate the string
    generate_bracket_arrangements(n, current_arrangement, 0, 0);
    
    return 0;
}
