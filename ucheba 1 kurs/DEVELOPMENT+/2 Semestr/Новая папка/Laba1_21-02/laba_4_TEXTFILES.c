//? 1. С клавиатуры заполнить файл словами. Вывести содержимое файла на экран.
//? 2. Распечатать второе и предпоследнее слова.
//? 3. Поменять местами самое длинное слово и самое коротко.

#include <stdio.h>
#include <string.h>
int main()
{
	FILE *f1;
	f1 = fopen("file_f1.txt","w");
	char * message; // = "Hello \n world!\n An apple a day keeps the doctor away";
	printf("Vvedite to chto nuzno zapisat f file: ");
	scanf("%c", &(*message));

	//l = fputs("Ехаmple", f1); 
	//int fputs(const char *str, FILE *f1);

	fputs(message, f1);
	
	fclose(f1);
	
	return 0;
}


