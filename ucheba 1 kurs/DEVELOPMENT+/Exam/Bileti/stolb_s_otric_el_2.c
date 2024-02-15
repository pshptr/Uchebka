#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int function(int **mas, int n, int m);
int main()
{
    int **mas, n, m, i, j;
    printf("Vvedite n, m : ");
    scanf("%d%d", &n, &m);
    mas = (int **)malloc(n * sizeof(int *));
    for(i = 0; i < n; i++)
    {
        mas[i] = (int *)malloc(m * sizeof(int));
        for(j = 0; j < m; j++)
        {
            printf("mas[%d][%d] = ", i, j);
            scanf("%d", &mas[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%5d ", mas[i][j]);
        }
        printf("\n");
    }

    int column = function(mas, n, m);
    free(mas);
    return 0;
}

int function(int** mas, int n, int m)
{
  int a, b, column = - 1;
  for(b = 0; b < n; b++)
  {
    bool flag = true;
    for(a = 0; a < m; a++)
    
        if(mas[a][b] < 0)
        {
            flag = false;
        } 
    break;
  }  
    printf("Number of colomn: %d", column);
    return(column);

}