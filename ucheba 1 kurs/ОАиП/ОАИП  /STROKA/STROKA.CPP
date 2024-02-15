//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define dl 30
int fun(char *);
void main()
{ clrscr();
  char *s,*ss;
  int n,n1,n2=-1,i,k,m=0,m1,m2,nn=0;
  s=(char *)calloc(dl,sizeof(char));
  gets(s);
  while(*(s+nn))
  { n1=++n2;
    while(*(s+n2)!=' ' && *(s+n2)) n2++;
    ss=(char *)calloc(n2-n1+1,sizeof(char));
    for(k=0,i=n1;i<n2;ss[k++]=s[i++]);
    if (fun(ss)>m) {m1=n1; m2=n2; m=fun(ss);}
    nn=n2;
  }
  puts("");
  for(i=m1;i<m2;i++) putchar(*(s+i));
}
int fun(char *s)
{ int i=0,j;
  while(i<strlen(s)-1)
  { if(s[i]!=' ')
    for(j=i+1;j<strlen(s);j++)
    if(s[i]==s[j]) s[j]=' ';
    i++;
  }
  i=j=0;
  while(s[i++]) if(s[i]!=' ') j++;
  return j;
}




