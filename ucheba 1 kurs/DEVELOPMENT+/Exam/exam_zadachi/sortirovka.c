// отсортировать строки по возрастанию суммы
# include <stdio.h>
# include <stdlib.h>


int main()
{
	int **A, n,m,k,i,j;
	printf ("input array size\n");
	scanf ("%d%d", &n,&m);

	A = (int**)calloc (n,sizeof (int*));
	for (i=0; i<n; i++)
		*(A+i)= (int*)calloc (m,sizeof (int));

	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
		scanf ("%d", &(*(*(A+i)+j)));
	

	int S1 = 0, S2 = 0;
	
for ( k=0; k<n; k++)
{
	for (i=0; i<n-1; i++)
	{
		S1=0; S2=0;
		for (j=0; j<m; j++)
		{
			S1+=A[i][j];
			S2+= *(*(A+i+1)+j);
		} 
		if (S1>S2)
		{
			int *temp = *(A+i);
			*(A+i)=*(A+i+1);
			*(A+i+1)=temp;
		}
		

	}
}

    int l = 1;
	int *temp = *(A+k);
	*(A+k)=*(A+l);
	*(A+l)=temp;
	


	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
			printf ("%3d", *(*(A+i)+j));
		printf("\n");
	}

	for (i=0; i<n; i++)
	{
		free (*(A+i));
	}
	free (A);

	return 0;
}