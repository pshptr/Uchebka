// 1) Написать функцию для нахождения в динамической матрице n*M столбца с
// минимальной суммой четных элементов.
//Дополнительных массивов не использовать.

/**
 * method
 * * * import nnkj
 * !
 * ? hjk
 * TODO jkjkjl
 */

#include <stdio.h>
#include <stdlib.h>

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

    int min_S = 0, ind_min_stolbec = 0;
    // if(mas[i][j] % 2 == 0)
    // {
        for (i = 0; i < n; i++)
        {
            // for (j = 0; j < n; j++)
            //     if(mas[i][j] % 2 == 0)
            // if(mas[i][0] % 2 == 0)
            min_S += mas[i][0];
        }

        for (j = 1; j < n; j++)
        {
            int S = 0;
            for (i = 0; i < n; i++)
            {
                // if(mas[i][j] % 2 == 0)
                // {
                S += mas[i][j];
                // }
            }

            if (min_S > S)
            {
                min_S = S;
                ind_min_stolbec = j;
            }
        }
    //}
    printf("min summa is in %d stolbec = %d\n", ind_min_stolbec + 1, min_S);
    
    
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