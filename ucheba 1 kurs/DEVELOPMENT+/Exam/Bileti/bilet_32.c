// найти мин элемент над побочной диагональю матрицы
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, n, m, i, j;
    printf("Input N, M: ");
    scanf("%d%d", &n, &m);

    int **mas;
    mas = (int **)calloc(n, sizeof(int *));
    for (i = 0; i < n; i++)
    {
        *(mas + i) = (int *)calloc(m, sizeof(int));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &(*(*(mas + i) + j)));
        }
    }

    printf("\n");
    // найти мин элемент над побочной диагональю матрицы

    min = (*(*(mas + 0) + 0));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j < n - 1)
            {
                if ((*(*(mas + i) + j)) < min)
                {
                    min = (*(*(mas + i) + j));
                }
            }
        }
    }

    printf("\n");
    printf("%d\n", min);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%3d", *(*(mas + i) + j));
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        free(*(mas + i));
    }
    free(mas);

    return 0;
}