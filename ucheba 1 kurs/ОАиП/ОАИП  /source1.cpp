
# include <header1.h>
// найти k слово 
int main()
{
char *s;
s=(char *)calloc(1,1);
gets(s);

int k;
scanf("%d", &k);
print_k_word(s,k);


return 0;
}