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

float getFloatArrayValue(FloatArray arr, int index) {
    if (index < 0 || index >= arr.size) {
        printf("Index out of bounds\n");
        exit(1);
    }
    return arr.data[index];
}

void setFloatArrayValue(FloatArray arr, int index, float value) {
    if (index < 0 || index >= arr.size) {
        printf("Index out of bounds\n");
        exit(1);
    }
    arr.data[index] = value;
}

int main() {
    int size = 10;
    FloatArray arr = createFloatArray(size);
    if (arr.size == 0) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    // Access and modify the elements of the array
    setFloatArrayValue(arr, 0, 3.14);
    setFloatArrayValue(arr, 1, 2.718);
    // ...

    // Retrieve the elements of the array
    float value0 = getFloatArrayValue(arr, 0);
    float value1 = getFloatArrayValue(arr, 1);
    // ...

    // Free the memory when you're done
    destroyFloatArray(arr);
    return 0;
}
