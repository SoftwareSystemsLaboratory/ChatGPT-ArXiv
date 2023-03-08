//
//
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float *data;
    int size;
} FloatArray;

FloatArray createFloatArray(int size) {
    FloatArray arr;
    arr.data = (float *) malloc(size * sizeof(float));
    arr.size = size;
    if (arr.data == NULL) {
        arr.size = 0;
    }
    return arr;
}

void destroyFloatArray(FloatArray arr) {
    if (arr.data != NULL) {
        free(arr.data);
    }
}

int main() {

    int size = 10;
    FloatArray arr = createFloatArray(size);
    if (arr.size == 0) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    // Access and modify the elements of the array
    arr.data[0] = 3.14;
    arr.data[1] = 2.718;
    // ...
    // [George note. Anything beyond size would not be safe.]
    // Free the memory when you're done
    destroyFloatArray(arr);
    return 0;
}
