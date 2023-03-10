void myFunction() {
  double* ptr = malloc(sizeof(double) * 10);
  if (ptr == NULL) {
    // handle the error
  } else {
    // use the memory
    ptr[0] = 1.0;
    ptr[1] = 2.0;
    // ...
    // free the memory
    free(ptr);
  }
}
