#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input_number(FILE *f);

int main()
{
    // input file name
    
    char *name_of_file = (char *)malloc(1 * sizeof(char));
    name_of_filew(name_of_file);
    // string concatenation
    
    // open file
    FILE *f;
    if ((f = fopen(name_of_file, "wb+")) == 0)
    {
        printf("Can't open\n");
    }
    // Enter numbers
    printf("Enter numbers (enter not a number to stop):\n");
    input_number(f);

    return 0;
}

void input_number(FILE *f)
{
    int writenumber;
    while (scanf("%d", &writenumber))
    {
        fwrite(&writenumber, sizeof(int), 1, f);
    }
}