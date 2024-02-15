#include <stdio.h>
#include <alloc.h>
#define size 100
//  поиск в строке слова max длины
void main()      /* */
{ char *st;
  int i,k,kk=0,i1,i2;
  st=(char *)malloc(size);
  puts("\n");
  gets(st);     /*ввод строки st1*/
  i=i1=i2=0;
  while(*(st+i))
  { for(k=0; *(st+i)!=' ' && *(st+i); i++) k++;
    if(kk<k) { kk=k; i1=i2; i2=i; }
    if(*(st+i)==' ') while(*(st+(++i))==' '); //удаление повторных пробелов
  }
  puts("\nслово max длины ");
  for(i=i1; i<i2; printf("%c",*(st+i++)));
}








