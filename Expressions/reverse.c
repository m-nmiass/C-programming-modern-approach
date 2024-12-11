/**********************************************
*   This programe revers a two digit number   *
**********************************************/

#include <stdio.h>

int main ()
{
	int i ;

	printf("Enter a two digit number :");
	scanf("%d", &i);

	printf("The reversal is : %d", (i%10)*10 + i/10);
}
