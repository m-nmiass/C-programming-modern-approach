/*********************************************************************
*   Test more than one number as long the  number is bigger than 0   *
*********************************************************************/

#include <stdio.h>

int main ()
{
	while (1)
	{
		int a[10] = {0} ;
		char i ;
		int j = 0 ;
		int f = 0 ;

		printf ("Enter a number ");
		
		while ((i = getchar()) != '\n')
		{
			if (f == 0 && (i == '-' || i == '0'))
				break ;
			else
			{
				a[((int)i - 48)]++;
				f++ ;
			}
		}
		if (f)
		{
				printf ("Numbers     : ");
			while (j < 10)
				printf ("%d   ", j++);

			printf ("\n");
			j = 0 ;

			printf ("Occurrences : "); 
			while (j < 10)
				printf ("%d   ", a[j++]);
			printf ("\n");
		}

		if (!f)
			break ;
	}
}
