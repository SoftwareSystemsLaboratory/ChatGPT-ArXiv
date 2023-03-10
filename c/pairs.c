#include <stdio.h>
#include <stdlib.h>
void printarray(int * array, int len, int * counter)
{
  (* counter) ++;
  int ind;
  for (ind = 0; ind < len; ind ++)
    { printf("%c ", array[ind]); }
  printf("\n");
}

void strgen(int * arr, int ind, int na, int nb, int len, int * counter)
{
  if ((na == 0) && (nb == 0))
    {
      printarray(arr, len, counter);
      return;
    }
  if (na != 0)
    {
      arr[ind] = 'a';
      strgen(arr, ind + 1, na - 1, nb, len, counter);
    }
  if (nb != 0)
    {
      arr[ind] = 'b';
      strgen(arr, ind + 1, na, nb - 1, len, counter);
    }
}

int counthelp(int na, int nb)
{
  if (na == 0)
    { return 1; }
  if (nb == 0)
    { return 1; }
  return (counthelp(na - 1, nb) + counthelp(na, nb - 1));
}

int count(int n)
{
  return counthelp(n, n);
}

int main(int argc, char * * argv)
{
  if (argc != 2)
    { return EXIT_FAILURE; }
  int n = (int)strtol(argv[1], NULL, 10);
  int * arr = malloc(sizeof(int) * (2 * n));
  int counter = 0;
  strgen(arr, 0, n, n, 2 * n, & counter);
  free (arr);
  printf("counter = %d\n", counter);
  printf("n = %d, count = %d\n", n, count(n));
  return EXIT_SUCCESS;
}
