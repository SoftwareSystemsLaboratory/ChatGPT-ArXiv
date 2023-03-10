int ch;
FILE * fptr = fopen("filename", "r");
if (fptr == NULL)
{
  return EXIT_FAILURE;
}
ch = fget(fptr);
char count[26] = {0};
if (ch == 'A')
{
  count[0] ++;
}
if (ch == 'A')
{
  count[0] ++;
}
if (ch == 'B')
{
  count[1] ++;
}
if (ch == 'C')
{
  count[2] ++;
}
if (ch == 'D')
{
  count[3] ++;
}
if (ch == 'E')
{
  count[4] ++;
}
if (ch == 'F')
{
  count[5] ++;
}

