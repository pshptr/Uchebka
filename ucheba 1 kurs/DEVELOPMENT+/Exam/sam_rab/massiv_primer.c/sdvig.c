// Заполнить массив случайными числами и выполнить циклический сдвиг элементов массива влево на K элементов. 
#include <stdio.h>
int main ()
{
    int mas[100] = {};
    int n;
    printf("\nvvedite razmer massiva ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("mas[%d]= ", i);
        scanf("%d", &mas[i]);
    }
    int C = mas[0];
    for (int i = 0; i < n - 1; i++ ){
        mas[i]  = mas[i + 1];
        mas[n - 1] = C;    
    }
    for (int i = 0; i < n; i++){
        printf("%d\n ",mas[i]);
    }

    return 0;
}
    