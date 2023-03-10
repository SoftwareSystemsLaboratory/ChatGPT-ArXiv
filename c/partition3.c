#include <stdio.h>

void partition(int n, int* arr, int len);

void print_partition(int* arr, int len) {
    printf("[");
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
        if (i < len-1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void partition(int n, int* arr, int len) {
    if (n == 0) {
        print_partition(arr, len);
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (len == 0 || i <= arr[len-1]) {
                arr[len] = i;
                partition(n-i, arr, len+1);
            }
        }
    }
}

int main() {
    int n = 4;
    int arr[n];
    partition(n, arr, 0);
    return 0;
}
