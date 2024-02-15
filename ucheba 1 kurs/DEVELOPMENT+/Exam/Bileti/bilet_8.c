// 1) удалить все нечет эл-ты из одном динам массива
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, i, j, n, k;
    printf("\nVvedite razmer massiva ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", arr + i);
    }

    for (i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 != 0)
        {
            for (j = i + 1; j < n; j++)
            {
                *(arr + (j - 1)) = *(arr + j);
            }
            arr = (int *)realloc(arr, (n - 1) * sizeof(int));
            n--;
            i--;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
    free(arr);
}

// 2) сортировка динамического массива строк по длине строки
