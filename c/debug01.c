#include <stdio.h>
#include <stdlib.h>
int main(int argc, char ** argv)
{
  int arr[] = {1, 2, 3, 4};
  free (arr);
  return EXIT_SUCCESS;
}