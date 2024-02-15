// написать функцию для нахождения номера первого столбца 
// со всеми отрицательными элементами
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int **mas, min, sum, n, m, i, j;
    printf("Input n, m: ");
    scanf("%d%d", &n, &m);
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

    

    int a, b, colomn = -1;
    for(b = 0; b < n; b++)
    {
        bool flag = true;
        for(a = 0; a < m; a++)
        {
            if(mas[a][b] < 0)
            {
                flag = false;
            }
        }break;
    }
    printf("Number of colomn: %d\n", colomn);


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