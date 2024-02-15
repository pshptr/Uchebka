/*
 * Вариант 2
 */
#include <stdio.h>
#include <stdlib.h>

void OpenFile(FILE *FilePtr, char Filename[], char mode[]);
void FWriteNumbers(FILE *FilePtr, int InputSequenceCoefficient);
void GenerateOutputFile(FILE *FilePtrIn, FILE *FilePtrOut, int OutputSequenceCoefficient);
void PrintFile(FILE *FilePtr, char Filename[]);

int main()
{
    FILE *Input = NULL;
    FILE *Output = NULL;
    char FilenameIn[] = "f.bin";
    char FilenameOut[] = "g.bin";
    char FOpenModeIn[] = "w+b";
    char FOpenModeOut[] = "w+b";
    const int InputSequenceCoefficient = 2;  // cahnge to 10
    const int OutputSequenceCoefficient = 1; // change to 5

    OpenFile(Input, FilenameIn, FOpenModeIn);

    int option;
    do
    {
        printf(
            "1)Enter sequence\n"
            "2)Stop\n");
        printf("Choose option:\n");
        scanf_s("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter %d positive, then %d negative numbers':\n",
                   InputSequenceCoefficient, InputSequenceCoefficient);
            FWriteNumbers(Input, InputSequenceCoefficient);
            break;
        case 2:
            goto EXIT;
        default:
            printf("[Wrong option! Try again.]\n\n");
        }
    } while (1);

EXIT:
    PrintFile(Input, FilenameIn);

    OpenFile(Output, FilenameOut, FOpenModeOut);
    GenerateOutputFile(Input, Output, OutputSequenceCoefficient);
    PrintFile(Output, FilenameOut);

    fclose(Input);
    fclose(Output);

    return 0;
}

void OpenFile(FILE *FilePtr, char Filename[], char mode[])
{
    FilePtr = fopen(Filename, mode);
    if (FilePtr == NULL)
    {
        printf("Error opening file '%s'\n", Filename);
        exit(1);
    }
    else
    {
        printf("File '%s' has been opened\n", Filename);
    }
}

void FWriteNumbers(FILE *FilePtr, int InputSequenceCoefficient)
{
    int NumBuffer;

    for (int j = 0; j < 2; j++)
    { // One iteration for negative and another one for positive numbers
        for (int i = 0; i < InputSequenceCoefficient; i++)
        {
            printf("[%d]:", i + 1);
            scanf_s("%d", &NumBuffer);
            fprintf_s(FilePtr, "%d", NumBuffer);
            // fwrite(&NumBuffer, sizeof(int), 1, FilePtr);
        }
    }
}

void GenerateOutputFile(FILE *FilePtrIn, FILE *FilePtrOut, int OutputSequenceCoefficient)
{
    int NumBuffer;

    rewind(FilePtrIn);
    rewind(FilePtrOut);
    while (!feof(FilePtrIn))
    {
        for (int i = 0; i < OutputSequenceCoefficient; i++)
        {
            fscanf_s(FilePtrIn, "%d", &NumBuffer);
            fprintf_s(FilePtrOut, "%d", NumBuffer);
        }
        fseek(FilePtrIn, 4, SEEK_CUR);
    }
}

void PrintFile(FILE *FilePtr, char Filename[])
{
    int NumBuffer;

    printf("Data from file '%s':\n", Filename);
    while (!feof(FilePtr))
    {
        fscanf_s(FilePtr, "%d", &NumBuffer);
        printf("%d ", NumBuffer);
    }
}