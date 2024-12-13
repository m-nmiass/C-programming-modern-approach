/*******************************************
*   reverse a number entered by the user   *
*******************************************/

#include <stdio.h>

int main ()
{
	int i, j ;
	j = 0 ;

	printf ("Enter a number : ");
	scanf ("%d", &i);

	while (i)
	{
		j = j * 10 + i % 10 ;
		i /= 10 ;
	}

	printf ("The reversed number is : %d", j);
}
