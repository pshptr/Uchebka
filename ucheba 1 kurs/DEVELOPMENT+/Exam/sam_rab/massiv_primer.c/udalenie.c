#include <stdio.h>
int main()
{
    int arr[100], n, k = 3, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }

    //Удалить элемент с номером К
    for (i = k + 1; i < n; i++){
        arr[i - 1] = arr[i];  // arr[i] – указывает, что сдвигаем
        n--;
    }
 
    // //варинат 2
    // for (i = k; i < n - 1; i++)
	// arr[i] = arr[i + 1];  // a[i] – указывает, куда сдвигаем
    // n--;


    // int x = 0;
    // for(i = 0; i < n; i++)
    // {
    //     arr[x] = arr[i];
    //     if(arr[i] % 2 != 0) x; 
    // }
    // for(i = x; i < n; i++){
    //     arr[i] = 0;
    //     //n--;
    // }

    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }


}