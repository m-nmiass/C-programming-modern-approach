/*********************************************************************
*   square program but the user unter if the program will continue   *
*********************************************************************/

#include <stdio.h>

int main ()
{

	int i, j ;
	j = 1 ;

	printf ("Enter the value of square (under 32,768) : ");
	scanf ("%d", &i);

	getchar () ;

	if (i > 32768 || i <= 0)
		printf ("Invalide number");

	else
		while (j <= i)
		{
			if (j % 24 == 0)
			{
				printf ("Press Enter to continue : ");
				while (getchar() != '\n') ;
			}
			printf ("%10d %10d\n", j , j*j) ;
			j++ ;
		}

}
