// 1)  написать функцию для циклического сдвига четных элементов на k !влево!.
// доп массивов не использовать
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, i, j, n, k, p, C, temp;
    printf("\nVvedite razmer massiva: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", arr + i);
    }
    printf("\nVvedite k: ");
    scanf("%d", &k);

    // for(k = 0; k < 4; k++) {
    //     int t;
    //     t = *(arr + (n - 1));
    //     for (i = n - 2; i >= 0; i--) {
    //         *(arr + (i - 1)) = *(arr + i); //[i + 1] = arr[i];
    //     }
    //     *(arr + 0) = t;
    // }

    // int temp;
    // for (i = 0, j = n - 1; i < j; ++i, --j)
    //     {
    //         if(*(arr + i) % 2 == 0)
    //         temp = *(arr + i);
    //         *(arr + i) = *(arr + j);
    //         *(arr + j) = temp;
    //     }

    for (i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
            for (p = 0; p < k; p++)
            {
                temp = *(arr + 0);
                for (i = 0; i < n - 1; i++)
                {
                    *(arr + i) = *(arr + i + 1); //[i + 1] = arr[i];
                }
                *(arr + n - 1) = temp;
            }
    }

    // for(p = 0; p < k; p++) {
    //         t = arr[0];
    //         for (i = 0; i < n - 1; i++) {
    //             arr[i] = arr[i + 1]; //[i + 1] = arr[i];
    //         }
    //         arr[n - 1] = t;
    // }

    // for(p = 0; p < k; p++) {
    //     int t;
    //     t = arr[0];
    //     for (i = 0; i < n - 1; i++) {
    //         arr[i] = arr[i + 1]; //[i + 1] = arr[i];
    //     }
    //     arr[n - 1] = t;
    // }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }
}

// 2) в динамическом массиве строк удалить одинаковые по длине строки.
// доп массивов не использовать