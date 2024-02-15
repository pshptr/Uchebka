#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int rows, cols, k, temp, i, j;
int* mas;
 
printf("Задайте размерность массива:\n");
printf("Количество строк: ");
scanf("%d", &rows);
printf("Количество столбцов: ");
scanf("%d", &cols);

printf("Номер строки для сортировки: ");
scanf("%d", &k);
k--;
 
mas = (int *)malloc(rows * cols * sizeof(int));
 
printf("Исходный массив: ");
for ( i = 0; i < rows; ++i)
{
    for( j = 0; j < cols; ++j)
    {
        printf("arr[%d][%d] = ", i, j);
        scanf("%d", mas + i * cols + j);
    }
}
 
for ( i = 0; i < cols; ++i)
{
    for ( j = 0; j < cols - 1; ++j)
    {
        if (*(mas + k * cols + j) > *(mas + k * cols + (j + 1)))
        {
            temp = *(mas + k * cols + j);
            *(mas + k * cols + j) = *(mas + k * cols + (j + 1));
            *(mas + k * cols + (j + 1)) = temp;
        }
    }
}

printf("Новый массив:\n ");
 
for ( i = 0; i < rows; ++i)
{
    for ( j = 0; j < cols; ++j)
        printf("%d\t ",*(mas + i * cols + j));
printf("\n");
}
 
return 0;
}