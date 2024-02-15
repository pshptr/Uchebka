# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int sum ( int *mas, int n);
double proizv_odd ( int *mas, int n);
int sum_even_places ( int *mas, int n);
int ind_max(int *m, int n);
int sum_between_max_min ( int *mas, int n);

int main ()
{
int mas[10], n=10, i;
srand (time (NULL));
for (i= 0 ; i< n; i++)
	mas[i] = rand() % 51;
for (i= 0 ; i< n; i++)
	printf(" %4d", mas[i]);

printf ("\nsum =  %d\n", sum(mas, n));	
printf ("\npr_odd =  %lf\n", proizv_odd(mas, n));
printf ("\nsum_even_places =  %d\n", sum_even_places(mas, n));
i=ind_max(mas, n);
printf ("\nmax =  %d\n ind_max= %d", mas[ i ], i);
int S;
S = sum_between_max_min(mas, n);
}

int sum ( int *mas, int n)
{
int s=0;
for (int i =0; i< n; i++)
	s+=mas[i];

return s;
}

double proizv_odd ( int *mas, int n)
{
double p=1;
for (int i =0; i< n; i++)
	if (mas[i] %2==1)
		p*= mas[i];
return p;
}

int sum_even_places ( int *mas, int n)
{
int s=0;
for (int i =1; i< n ; i++)
if (i%2==0)
	s+=mas[ i ];

return s;
}


int ind_max(int *m, int n)
{
int ind = 0;
int max=m[ind];

for (int i=0; i< n ; i++)
	if (max < m[i])
	{
		max= m[i];
		ind = i; 
	}
return ind;
}

int ind_min(int *m, int n)
{
int ind = 0;
int min=m[ind];

for (int i=0; i< n ; i++)
	if (min >= m[i])
	{
		min= m[i];
		ind = i; 
	}
return ind;
}

int sum_between_max_min ( int *mas, int n)
{
int s=0;
int a=ind_max(mas,n);
int b;
b = ind_min(mas,n);
for(int i =a+1; i< b ; i++){

	s+=mas[ i ];

return s;
}

int sum_after_neg ( int *mas, int n);


int ind=0;
for (int i = 0; i < n ; i++){
	if (mas[i] < 0) 
        ind = i;
break;
}
for (int i = ind + 1; i < n ; i++)
	s += mas[ i ];

return s;

}
