/******************************************************
*   convert alphabetic phone number to numeric form   *
******************************************************/

#include <stdio.h>

int main ()
{

	char a ;

	printf ("Enter phone number :");

	while (( a = getchar ()) != '\n')
	{
		if ( a >= 'A' && a <= 'Y' && a != 'Q')
		{
			if (a > 'Q')
				a -= 1 ;
			a = ( ( a - 'A' + 3 ) / 3 ) + 1 + 48 ;
		}
		printf ("%c", a );
	}

}	
