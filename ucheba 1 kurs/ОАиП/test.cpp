#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int main ()
{
  int *mas, i, j, n, m;
  printf ("Vvedite chislo strok i stolbcov: ");
  scanf ("%d%d", &n,&m);
  mas = (int *) malloc (n * m * sizeof (int));
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	{
	  printf ("mas[%d][%d] = ", i, j);
	  scanf ("%d", (mas + i * m + j));
	}
    }
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	{
	  printf ("%d ", *(mas + i * m + j));
	}
	printf("\n");
    }
  //free (mas);
  
  int *n;
  int** new_mas = (int **)realloc(mas, (*n) * sizeof(int *));
    if (new_mas == nullptr) {
        (*n)--;
    }
  return 0;
}
