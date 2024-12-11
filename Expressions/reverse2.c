/******************************
*   reverse of three digits   *
******************************/

#include <stdio.h>

int main ()
{
	int i , j ; 
	j = 0 ;

	printf ("Enter three digit number :");
	scanf ("%d" , &i);
	
	j = j * 10 + i % 10 ;
	i = i / 10 ;
	j = j * 10 + i % 10 ;
	i = i / 10 ;
	j = j * 10 + i % 10 ;

	printf("The reversal is : %d", j );
}
