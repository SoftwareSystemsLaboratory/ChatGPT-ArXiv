//
// Conversation with Chat-GPT. First answer.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 10;
    float *arr = (float *) malloc(size * sizeof(float));
    if (arr == NULL) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    // Access and modify the elements of the array
    arr[0] = 3.14;
    arr[1] = 2.718;
    // ...

    // Free the memory when you're done
    free(arr);
    return 0;
}
