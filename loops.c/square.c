/*********************************************
*   This program prints a table of squares   *
*********************************************/

#include <stdio.h>

int main ()
{
	int n , j ;
	j = 0 ;

	printf ("Enter number of entries in table : ");
	scanf("%d", &n);

	while ( n )
		printf ("%d%10d\n", j, j*j, j++, n--);

}

