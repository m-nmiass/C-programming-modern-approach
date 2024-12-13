/************************************************
*   prints one-mouth calendar where you enter   *
*        number of days and beggining day       *
************************************************/

#include <stdio.h>

int main () 
{
	int i, d, t;

	printf ("Enter number of days in a mouth : ");
	scanf("%d", &i);

	printf ("Enter starting day of the week (1=Sun, 7=Sat) : ");
	scanf("%d", &d);
	
	t = d ;

	while ( d > 1 )
	{
		printf ("   ");
		d-- ;
	}

	while ( d <= i )
	{
		printf (" %2d", d );

		if ( t % 7 == 0 )
			printf ("\n");
		d++ ;
		t++ ;
	}
}

