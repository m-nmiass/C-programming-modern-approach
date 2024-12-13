/*******************************************
*   Find the largest number in the serie   *
*******************************************/

#include<stdio.h>

int main ()
{
	float i, b ;
	b = 0 ;

	do 
	{
		printf ("Enter a number : ");
		scanf ("%f", &i);

		if (i < 0)
			break ;
		
		if (i > b)
			b = i ;
	}while(i);

	printf ("The largest nember entered was : %.2f", b);
}
