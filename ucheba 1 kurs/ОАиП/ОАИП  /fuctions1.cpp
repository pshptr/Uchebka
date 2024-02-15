
# include <stdio.h>
# include <stdlib.h>
# include <alloc.h>

void print_k_word(char *s,int k);
{
int cnt=cnt_word_in_line(s);
if (k> cnt)
{
	printf ("error");
	return;
}
int n=len (s);
int t=0, i=0;
if (letter(s[0]) == 1) t++;
while (t<k && i<n)
{

	if (letter (s[i])==0 && 
	letter (s[i+1])==1)
		t++;
	i++;
}
while ( letter (s[i])==1)
{
	printf("%c", s[i]);
	i++;
}
}
















int cnt_word_in_line(char *s)
{
int k=0;
int i;
if (letter(s[0]) == 1) k++;
int n =len(s);
for (i=0; i<n-1; i++)
	if (letter (s[i])==0 && 
	letter (s[i+1])==1)
		k++;

return k;
}

int letter(char c)
{
if(c>='a' && c<='z' || 
c>='A' && c<='Z')
	return 1;
else return 0;
}

int len(char *s)
{
	int i=0;
	while (s[i]!=‘\0’)
		i++;
	return i;
}

