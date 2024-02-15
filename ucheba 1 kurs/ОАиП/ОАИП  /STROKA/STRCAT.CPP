// функция вставки / добавления в строку s1 строки s2
// с позиции k
char * strcat(char *s1,char *s2,int k)
{ char *ss;
  int i;
  if (k>str_len(s1)) k=str_len(s1);
  if ((ss=(char *)malloc(sizeof(char)*(str_len(s1)+str_len(s2))))==NULL)
  { printf("\nНедостаточно свободной памяти ");
    return s1;                  // возврат строки без изменения
  }
  for (i=0; i<k; i++)           // перезапись s1 в ss k символов
  *(ss+i)=*(s1+i);
  for (i=0; *(s2+i)!='\0'; i++) // дозапись s2 в ss srt_len символов
  *(ss+k+i)=*(s2+i);
  for (i=0; *(s1+k+i)!='\0'; i++) // дозапись остатка s1 в ss
  *(ss+k+str_len(s2)+i)=*(s1+k+i);
  *(ss+k+str_len(s2)+i)='\0';
  s1=ss;
  return s1;                     // строки полностью совпали
}








