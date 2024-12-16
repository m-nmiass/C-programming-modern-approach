/*********************************************
*   define the largest value of the square   *
*********************************************/

#include<stdio.h>

int main ()
{

	int i, j ;
	
	j = 1 ;

	printf ("Enter the max value of square must be less than 32,768 : ");
	scanf ("%d", &i);

	if (i > 32768 || i < 0)
		printf ("Invalid number");
        
	else
		while (j <= i)
		{
			printf ("%10d %10d\n", j, j*j);
			j++ ;
		}

}	
