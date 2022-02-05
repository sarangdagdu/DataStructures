#include<stdio.h>
int main (void)
{
  int small = 0, l1, l2, i, flag = 0;
  int a[] = { 1, 2, 3 };
  int b[] ={ 4, 5, 6};
  
  
  l1 = sizeof (a) / sizeof (int);
  l2 = sizeof (b) / sizeof (int);

  small = a[0];

  for (i = 1; i < l1; i++)
  {
      if (small > a[i])
	  small = a[i];
  }
  for (i = 0; i < l2; i++)
  {
    if (small == b[i])
	flag = 1;
  }
  if (flag == 1)
    {
      printf ("NO");
    }
  else
    {
      printf ("%d", small);
    }
  return 0;
}
