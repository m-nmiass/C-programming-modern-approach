/**************************************************************
*   Determinate wich two dates come earlier on the calendar   *
**************************************************************/

#include <stdio.h>

int main ()
{
	int d, m, y, i, j, k ;
	
	i = 4000 ;
	j = 13 ;
	k = 32 ;

	do
	{
		printf ("Enter a date (mm/dd/yy) : ");
		scanf ("%d/%d/%d", &m, &d, &y) ;
		if ( d == 0 || m == 0 || y == 0 )
			break ;
		if (i > y || ( i == y && j > m ) || ( i == y && j == m && k > d ))
		{
			i = y ;
			j = m ;
			k = d ;
		}
	}while (1);

	printf ("%d/%d/%.2d is the earliest day", j, k, i);

}
