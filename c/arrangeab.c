#include <stdio.h>

// Recursive function to generate permutations of three pairs of a's and b's
void generate_permutations(char *arr, int len, int index)
{
    // Base case: we've generated a full permutation
    if (index == len) {
        printf("%s\n", arr);
        return;
    }

    // Generate all possible swaps for the current index
    for (int i = index; i < len; i++) {
        // Don't swap if the characters are the same
        if (arr[i] == arr[index] && i != index) {
            continue;
        }

        // Swap the characters
        char tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;

        // Recursively generate permutations for the remaining indices
        generate_permutations(arr, len, index + 1);

        // Swap the characters back
        tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;
    }
}

int main()
{
    // Create an array of six characters representing the three pairs of a's and b's
    char arr[] = {'a', 'a', 'b', 'b', 'c', 'c'};

    // Generate all permutations of the array
    generate_permutations(arr, 6, 0);

    return 0;
}
