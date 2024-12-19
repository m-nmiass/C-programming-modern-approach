/*******************************************************************
*   This program check if the number has a repeted digit or more   *
*******************************************************************/

#include<stdio.h>

int main ()
{
	int a[10] = {0} ;
	int i ;
	char c ;
	int j = 0 ;

	printf ("Enter a number ");

	while ((c =getchar()) != '\n')
	{
		i = c - 48 ;
		if (a[i] == 1)
		{
			j = 1 ;
			break ;
		}
		else	
			a[i]++ ;
	}

	j ? printf ("Repeated digit") : printf ("Non repeated digit");
}	
