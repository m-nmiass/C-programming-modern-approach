/*******************************************
*   calculating square using odd numbers   *
*******************************************/

#include <stdio.h>

int main ()
{
	int j, odd, squ ;

	printf ("Enter number of entries in table :");
	scanf ("%d", &j) ;
	
	squ = 1 ;
	odd = 3 ;

	for (int i = 1; i <= j; odd += 2 )
	{
		printf ("%10d%10d\n", i, squ);
		i++;
		squ += odd ;
	}
}
