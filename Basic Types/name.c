/******************************************************
*   display the first character and the second name   *
******************************************************/

#include <stdio.h>

int main ()
{
	char c, h ;

	printf ("Enter the first and the last name : ");
	
	c = getchar() ;
	
	while (( h = getchar ()) != ' ') ;
	while (( h = getchar ()) == ' ') ; 
	
	printf ("%c", h);
	while (( h = getchar ()) != '\n')
		printf ("%c", h );

	printf (", %c", c) ;
}
