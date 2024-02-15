#include <stdio.h>
int main()
{
    int arr[100][100], sum, sum_str, max, sum_nad_d = 0, sum_pod_d = 0, sum_pod_p = 0, max_s, S, k, n, i, j;
    printf("Vvedite razmer  ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // // Найти сумму всех элементов матрицы размером N на M
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < n; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    // } 
    // printf("\n%d\n", sum);

    // // Найти сумму k-ой строки матрицы
    // printf("Vvedite k ");
    // scanf("%d", &k);
    // for(j = 0; j < n; j++)
    // {
    //     sum_str += arr[k-1][j];
    // } 
    // printf("\n%d\n", sum_str);

    // // Найти максимальный/минимальный элемент в k-ой строке/столбце матрицы
    // printf("Vvedite k ");
    // scanf("%d", &k);
    //     for(j = 0; j < n; j++)
    //     {
    //         if(max < arr[k - 1][j])
    //         max = arr[k - 1][j];
    //     }
    //     printf("\n");
    //     printf("\n Max = %d\n", max);

    // // Найти строку с максимальной суммой элементов
    // int ind_max_line;
    // //sum = 0;
    // for(j = 0; j < n; j++)
    // {
    //     max_s += arr[0][j];
    // }
    // for(i = 0; i < n; i++)
    // {
    //     S = 0;
    //     for(j = 0; j < n; j++)
    //     {
    //         S += arr[i][j];
    //         if(max_s < S)
    //         max_s = S;
    //         ind_max_line = i;
    //     }
    // }
    // printf("\n");
    // printf("\n Max summa = %d v stroke = %d\n", max_s, ind_max_line + 1);

    // Найти сумму под / !над!!главной! /побочной диагональю матрицы
    for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
        {
            sum_nad_d += arr[i][j];
        }
		
	}
    printf("summa nad glav diagonal: %d\n", sum_nad_d);


     // Найти сумму !под! / над !главной! /побочной диагональю матрицы
    for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
        {
            sum_pod_d += arr[i][j];
        }
		
	}
    printf("summa pod glav diagonal: %d\n", sum_pod_d);



     // Найти сумму !под! / над главной / ! побочной ! диагональю матрицы
    for (i = n - 1; i < n; i++)
	{
		for (j = n + 1; j < n; j++)
        {
            sum_pod_p += arr[i][j];
        }
		
	}
    printf("summa pod poboch diagonal: %d\n", sum_pod_p);


    
    for(i = 0; i < n; i++)
    {
        for(j = n; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
