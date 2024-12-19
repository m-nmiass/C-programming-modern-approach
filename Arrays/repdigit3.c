/*********************************************
*   Show how many times each digit appears   *
*********************************************/

#include<stdio.h>

int main ()
{
	int a[10] = {0} ;
	char i ;
	int j = 0 ;

	printf ("Enter the number : ");

	while ((i = getchar()) != '\n')
		a[(i - 48)]++ ;
	
	printf ("Digits :     ");
	while (j < 10)
		printf ("%d   ", j++);

	j = 0 ;
	printf ("\n");

	printf ("Occurences : ");
	while (j < 10)
		printf ("%d   ", a[j++]);
}
