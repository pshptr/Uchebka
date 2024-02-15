// 1) написать функцию многомерного массива методом Шелла

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, k, pas, buf, b;

    int n, m, i, j;
    printf("Input N, M: ");
    scanf("%d%d", &n, &m);

    int **mas;
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

    int gap, flg, t;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        do
        {
            flg = 0;
            // for (i = 0, j = gap; j < n; i++, j++)
            for (i = 0; i < n; i++)
            {
                for (j = gap; j < n; j++)
                {
                    if ((*(*(mas + i) + j)) > (*(*(mas + gap) + gap)))
                    {
                        t = (*(*(mas + gap) + gap));
                        (*(*(mas + gap) + gap)) = (*(*(mas + i) + j));
                        (*(*(mas + gap) + gap)) = t;
                        flg = 1;
                    }
                }
            }
            // if ((*(*(mas + i) + j)) > (*(*(mas + gap) + gap)))
            // {
            //     t = (*(*(mas + gap) + gap));
            //     (*(*(mas + gap) + gap)) = (*(*(mas + i) + j));
            //     (*(*(mas + gap) + gap)) = t;
            //     flg = 1;
            // }
        } while (flg);
    }

    pas = n * m;

    printf("\n");
    do
    {
        pas = n * m;
        b = 1;
        while (pas = pas / 2)
        {
            for (j = 0; j < m; j++)
            {
                for (i = 0; i < n; i++)
                {
                    if (i + pas < n)
                    {
                        if (*(*(A + i) + j) > *(*(A + (i + pas)) + j))
                        {
                            b = 0;
                            buf = *(*(A + i) + j);
                            *(*(A + i) + j) = *(*(A + (i + pas)) + j);
                            *(*(A + (i + pas)) + j) = buf;
                        }
                    }
                    else
                    {
                        s = i + pas;
                        k = j;
                        while (s >= n)
                        {
                            s -= n;
                            k++;
                        }
                        if (k < n)
                        {
                            if (*(*(A + i) + j) > *(*(A + s) + k))
                            {
                                b = 0;
                                buf = *(*(A + i) + j);
                                *(*(A + i) + j) = *(*(A + s) + k);
                                *(*(A + s) + k) = buf;
                            }
                        }
                    }
                }
            }
        }
    } while (!b);

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

// 2) найти максимальное в длину слово в к-ой строке в динамическом массиве строк

//сортировка двухмерного массива
//по возрастанию
//массив заполняется "случайными"числами с помощью rand()
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    setlocale(0, ""); //чтоб консоль писала по русски
    srand(time(NULL));
    const int str = 5;
    const int stolb = 5;
    int mass[str][stolb];
    int i, j, a, c, e = 1, d = 100, temp, x, z;
    //заполняем двухмерный массив и выводим на экран
    //______________________________________________________________________________
    cout << "До сортировки"
            "\n\n";
    for (i = 0; i < str; i++)
    {
        for (j = 0; j < stolb; j++)
        {
            a = rand() % (d - e) + e;
            mass[i][j] = a;
            cout << mass[i][j] << "\t";
        }
        cout << "\n\n\n\n";
    }
    cout << "\n\n";
    //Сортируем массив
    //_______________________________________________________________________________
    for (c = 0; c <= (str * stolb); c++) //колличество проходов
    {
        //в строках упорядочиваем
        //____________________________________________
        for (i = 0; i < str; i++)
        {
            for (j = 0; j < stolb - 1; j++)
            {
                if (mass[i][j] > mass[i][j + 1])
                {
                    temp = mass[i][j];
                    mass[i][j] = mass[i][j + 1];
                    mass[i][j + 1] = temp;
                }
            }
        }
        //в столбах упорядочиваем
        //_____________________________________________
        for (x = 0; x < stolb; x++)
        {
            for (z = 0; z < str - 1; z++)
            {
                if (mass[z][x] > mass[z][x + 1])
                {
                    temp = mass[z][x];
                    mass[z][x] = mass[z][x + 1];
                    mass[z][x + 1] = temp;
                }
            }
        }
    }
    //вывод на экран после сортировки
    //__________________________________________________________

    cout << "После сортировки по возрастанию"
            "\n\n\n\n";
    for (i = 0; i < str; i++)
    {
        for (j = 0; j < stolb; j++)
        {
            cout << mass[i][j] << "\t";
        }
        cout << "\n\n\n\n";
    }

    return 0;
}