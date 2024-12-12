/***********************************
*   convert 24h form to 12h form   *
***********************************/

#include <stdio.h>

int main ()
{
	int h, m ;
	
	printf ("Enter a 24-hour time: ");
	scanf ("%d:%d", &h, &m);

	printf ("Equivalent 12-hour time : ");
	if ( h == 12 )
		printf ("%d:%d PM", h , m );
	else if ( h > 12 )
		printf ("%d:%d PM", h - 12, m );
	else 
		printf ("%d:%d AM", h, m );
}

