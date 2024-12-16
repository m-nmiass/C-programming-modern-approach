/****************************************************
*   Conver time from 12-Hour time to 24-Hour time   *
****************************************************/

#include<stdio.h>

int main ()
{
	int h, min ;
	char a ;

	printf ("Enter a 12-hour time : ");
	
	scanf ("%d:%d", &h, &min );

	while ((a = getchar ()) == ' ');

	
	printf ("Equivalent 24-hour time : ");

	if (a == 'P' || a == 'p')
			h = h + 12 ;

	printf ("%d:%d", h, min);
}
