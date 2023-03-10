void printPartition(int * arr, int length)
{
  int ind;
  for (ind = 0; ind < length - 1; ind ++)
    {
      printf("%d + ", arr[ind]);
    }
  printf("%d\n", arr[length - 1]);
}

void partition(int * arr, int ind, int left)
{
  int val;
  if (left == 0)
    {
      printPartition(arr, ind);
    }
  for (val = 1; val < left; val ++)
    {
      arr[ind] = val;
      partition(arr, ind + 1, left - val);
    }
}
