/* Шарай Пётр Юрьевич, 150701. Вариант 11:
1)С клавиатуры заполнить файл целыми числами.
2)Найти самую длинную последовательность равных элементов.
3)Занулить элементы, стоящие на позициях с четными номерами (начиная от 0, слева).
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input_number(FILE *f);
void output_number(FILE *f, int *reading_number);
void longest_sequence(FILE *f, int *reading_number);
void nulling(FILE *f);
void name_of_filek(char *name_of_file);

int main()
{
    // input file name

    char *name_of_file = (char *)malloc(1 * sizeof(char));
    name_of_filek(name_of_file);
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
    // output number
    int reading_number;
    printf("Numbers from file\n");
    output_number(f, &reading_number);
    // finding the longest sequence and output this elements
    longest_sequence(f, &reading_number);
    // nulling elements with even numbers
    nulling(f);
    // close file
    fclose(f);
}

void input_number(FILE *f)
{
    int writenumber;
    while (scanf("%d", &writenumber))
    {
        fwrite(&writenumber, sizeof(int), 1, f);
    }
}

void output_number(FILE *f, int *reading_number)
{
    fseek(f, 0, SEEK_SET);
    while (fread(reading_number, sizeof(int), 1, f))
    {
        printf("%d ", *reading_number);
    }
    printf("\n");
}

void longest_sequence(FILE *f, int *reading_number)
{
    int reaped = 0;
    int count = 1;
    int max = 1;
    int index_max_sequence = 1;
    int index = 0;
    fseek(f, 0, SEEK_SET);
    // checking elements for repetition
    while (fread(reading_number, sizeof(int), 1, f))
    {
        index++;
        if (*reading_number == reaped)
        {
            count++;
            if (count > max)
            {
                max = count;
                index_max_sequence = index;
            }
        }
        else
        {
            reaped = *reading_number;
            count = 1;
        }
    }
    // decrease the number of maximum elements if they = 0 and start from the beginning of the file
    int index_min_sequence = index_max_sequence - max;
    if (index_min_sequence < 0)
    {
        index_min_sequence = 1;
        max--;
    }
    // output longest sequence
    printf("longest sequence = %d elements\n", max);
    // print the longest sequence
    printf("sequence equals: ");
    // displaying the elements of this sequence
    int reading_number_sequence;
    int flag = 0;
    fseek(f, 0, SEEK_SET);
    while (fread(&reading_number_sequence, sizeof(int), 1, f))
    {
        if (index_min_sequence <= flag && flag < index_max_sequence)
        {
            printf("%d ", reading_number_sequence);
        }
        flag++;
    }
    printf("\n");
}

void nulling(FILE *f)
{
    int reading_number = 0;
    int zero = 0;
    int temp = 0;
    // file size
    fseek(f, 0, SEEK_END);
    int file_size = ftello(f);
    // nulling
    for (int i = 0; i < (file_size / 8 + 1); i++)
    {
        fseek(f, temp * sizeof(int), SEEK_SET);
        fwrite(&zero, sizeof(int), 1, f);
        temp = temp + 2;
    }
    // output number
    printf("Numbers from file with 0\n");
    output_number(f, &reading_number);
}

void name_of_filek(char *name_of_file)
{
    char unused_symbol[13] = {"~@#$^-_()!?*&"};
    int leng_s = 0, i;
    int flag = 0;
    do
    {
        name_of_file = (char *)realloc(name_of_file, 1 * sizeof(char));
        flag = 0;
        leng_s = 0;
        printf("Enter the name of file: ");
        do
        {
            leng_s++;
            name_of_file = (char *)realloc(name_of_file, leng_s * sizeof(char));
            scanf("%c", &name_of_file[leng_s - 1]);
        } while (name_of_file[leng_s - 1] != '\n' || leng_s < 2);
        for (int i = 0; i < 13; i++)
        {
            // find the first occurrence of a character in a string
            if (strchr(name_of_file, unused_symbol[i]) != NULL)
            {
                printf(" unused symbol!\n ");
                flag = 1;
                name_of_file = (char *)realloc(name_of_file, 0 * sizeof(char));
            }
        }
    } while (flag == 1);
}