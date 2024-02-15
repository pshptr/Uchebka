#include <stdio.h>
# include <stdlib.h>
//#include <malloc.h>

int main()
{
    int N;
    printf("Input N: ");
    scanf("%d", &N);
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    printf("Input the array elements:\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &mass[i]);
    //сортировка пузырьком
    int tmp;

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (mass[j] > mass[j + 1])
            {
                tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;
            }
        }
    }
    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");
    free(mass);
    return 0;
}