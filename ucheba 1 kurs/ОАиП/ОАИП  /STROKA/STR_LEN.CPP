// определение длинны строки
int str_len(char *s)
{ for(int t=0;s[t]!='\0';t++);
  return t;
}