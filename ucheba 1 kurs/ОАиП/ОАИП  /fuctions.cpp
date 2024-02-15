
# include <stdio.h>
# include <stdlib.h>
# include <alloc.h>

int main()
{
	int *A, n, max,i;
	printf ("input array size\n");
	scanf ("%d", &n);

	A= (int*)calloc (n,sizeof (int));
	
	for (i=0; i<n; i++)
		scanf ("%d", A+i);
	
	for (i=0; i<n; i++)
		if (*(A+i)%2==0) 
		{
			max = *(A+i); 
			break;
		}
	
	for (i=0; i<n; i++)
		if (max< *(A+i) && *(A+i)%2==0)
			max= *(A+i);

	printf ("%d", max);
	free(A);

	return 0;
}