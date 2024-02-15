# include <stdio.h>
# include <stdlib.h>
//#include <malloc.h>
int main()
{
    int temp, n, i, j;
    printf("Input n: ");
    scanf("%d", &n);
    int* arr;
    arr =  (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    for(i = n - 1; i >= 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr); 


    return 0;
}