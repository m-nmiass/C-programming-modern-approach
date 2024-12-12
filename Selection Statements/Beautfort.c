/***********************************************
*   Estimate wind force under Beaufort scale   *
***********************************************/

#include <stdio.h>

int main ()
{
	int w ;

	printf ("Enter wind speed (Kntos) : ");
	scanf ("%d", &w);

	if ( w < 1 )
		printf ("Calm");
	else if ( w < 4 )
		printf ("Light air");
	else if ( w < 28 )
		printf ("Breeze");
	else if ( w < 48 )
		printf ("Gale");
	else if ( w < 64 )
		printf ("Storm");
	else 
		printf ("Hurricane");
}
