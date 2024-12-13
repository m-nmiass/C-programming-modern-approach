/*******************************
* square table with for loop   *
*******************************/

#include<stdio.h>

int main ()
{
	int j ;

	printf ("Enter number of entries in table: ");
	scanf ("%d", &j);

	for (int i = 1; i <= j; i++)
	       printf ("%10d%10d\n", i, i*i);
}	
