//
//  main.c
//  structuri
//
//  Created by Petia on 1.04.22.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    char surname[50], name[50], patronymic[50];
    char employee_date[10];
    double salary;
};

int print(struct Employee stud )
{
    printf("%10s", stud.name, stud.surname, stud.patronymic);
    printf("%10s", stud.employee_date);
    printf("%6f", stud.salary);
    
    return 0;
}

int main()
{
    int mas_sal_N[] = {};

    struct Employee employee_data[10];
    for(int i = 0; i < 3; i++)
    {
        printf("Vvedite surname name and patronomyc: ");
        scanf("%s", &employee_data[i].surname);
        scanf("%s", &employee_data[i].name);
        scanf("%s", &employee_data[i].patronymic);
        printf("Vvedite employee date: ");
        scanf("%s", &employee_data[i].employee_date);
        printf("Vvedite salary: ");
        scanf("%lf", &employee_data[i].salary);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%s\n", employee_data[i].surname);
        printf("%s\n", employee_data[i].name);
        printf("%s\n", employee_data[i].patronymic);

        printf("%s\n", employee_data[i].employee_date);

        printf("%lf\n", employee_data[i].salary);

    }
   
    // int N;
    // printf("Vvedite znachenie N: ");
    // scanf("%d", &N);
    
    return 0;
}
