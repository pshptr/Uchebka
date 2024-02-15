//  примеры некоторых стандартных функций для работы со строками
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int k;
#include <e:\borlandc\txt_c\stroka\str_len.cpp>
#include <e:\borlandc\txt_c\stroka\str_cmp.cpp>
#include <e:\borlandc\txt_c\stroka\strcat.cpp>
#include <e:\borlandc\txt_c\stroka\get_str.cpp>
#include <e:\borlandc\txt_c\stroka\getstr.cpp>
#include <e:\borlandc\txt_c\stroka\atoi.cpp>
#include <e:\borlandc\txt_c\stroka\itoa.cpp>
#include <e:\borlandc\txt_c\stroka\atof.cpp>

int str_len(char *);
int str_cmp(char *,char *);
char * strcat(char *,char *,int);
get_str(char *,int);    // первый параметр - указатель на char, а при
			// описании ф-ции get_str первый параметр - массив
			// get_str возвращает значение типа  int
int atoi(char []);      // параметр - указатель на символьный массив
void itoa(int n,char *ss);

void main()
{ char *s1,*s2;
  int n,n1,n2;
  do
  { clrscr();
    fflush(stdin);
    printf("введите размерность ПЕРВОЙ строки = ");
  } while(!scanf("%d",&n1) || n1<=0);
  if (!(s1=(char *)calloc(n1,sizeof(char))))
  { printf("\nНедостаточно свободной памяти \n");
    return;
  }
  do
  { clrscr();
    fflush(stdin);
    printf("введите размерность ВТОРОЙ строки = ");
  } while(!scanf("%d",&n2) || n2<=0);
  if (!(s2=(char *)calloc(n2,sizeof(char))))
  { printf("\nНедостаточно свободной памяти \n");
    free(s1);
    return;
  }
  printf("Вводите первую строку  ");
  fflush(stdin);  getstr(s1); //ввод первой строки сист. ф-цией gets()
  printf("\nДлина первой строки == %d байт",str_len(s1));
  //printf("\nЗначение числа (double) в строке %s == %lf ",s1,atof(s1));
  n=atoi(s1);
  printf("\nЗначение числа (int) в строке %s == %d \n",s1,n);
  itoa(n,s2);
  printf("\nЗначение строки (char)  == %s ",s2);
  fflush(stdin);      // ввод строки и возврат ее длины ф-цией get_str()
  printf("\nДлина второй строки == %d байт",get_str(s2,n2));
  if (str_cmp(s1,s2)>0) printf("\nСтрока 1 > строки 2");
  else if (str_cmp(s1,s2)<0) printf("\nСтрока 1 < строки 2");
       else printf("\nСтрока 1 = строке 2");
  s1=strcat(s1,s2,3);
  printf("\nстрока (s1+s2) == %s",s1);

}