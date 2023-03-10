double *ptr = malloc(sizeof(double) * 10);
if (ptr == NULL) {
    // handle the error
} else {
    // use the allocated memory
    // ...
    // free the memory
    free(ptr);
}
