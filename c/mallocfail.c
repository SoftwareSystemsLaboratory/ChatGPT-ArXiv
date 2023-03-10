int *array;
int size = 10;

array = malloc(size * sizeof(int));
if (array == NULL) {
    printf("Error: failed to allocate memory\n");
    exit(1);
}

// Use the allocated memory here...

free(array); // Free the memory when done with it
