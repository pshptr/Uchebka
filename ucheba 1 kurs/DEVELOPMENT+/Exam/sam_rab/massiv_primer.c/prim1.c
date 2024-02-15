// Написать программу для нахождения суммы элементов массива стоящих на четных местах
#include <stdio.h>
int main ()
{
    int sum = 0, n;
    printf ("vvedite n ");
    scanf("%d", &n);
    int mas[100] = {};
    for(int i = 0; i < n; i++){
        printf("a[%d]= ", i);
        scanf("%d", &mas[i]);
    }
    for (int i = 0; i < n; i++){
        if(i % 2 == 0  && i != 0){
            sum += mas[i];
        }

    }
    printf("\n summa ravna %d\n\n", sum);

    return 0; 
}
