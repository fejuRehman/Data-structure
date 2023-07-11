#include<stdio.h>
int
main ()
{
  for (int i = 0; i < 8; i++)
    {
      for (int k = 0; k < 8 - i - 1; k++)
	{
	  printf (" ");
	}

      for (int j = 0; j <= i; j++)
	{
	  printf ("* ");
	}

      printf ("\n");
    }
  return 0;
}
