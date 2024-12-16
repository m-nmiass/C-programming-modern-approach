/****************************************
*   calculate the length of a message   *
****************************************/

#include <stdio.h>

int main ()
{
	int i = 0 ;
	char c ;

	printf ("Enter a message : ");

	while ((c = getchar()) != '\n')
		i++ ;

	printf ("Your message was %d character(s) long.", i );

}
