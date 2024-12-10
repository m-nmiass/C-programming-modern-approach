/************************************
*   calculate the sum of fraction   *
************************************/

#include <stdio.h>

int main ()
{
	int num1, denom1, num2, denom2 ;

	printf("Enter the first fraction :");
	scanf ("%d/%d", &num1, &denom1);

	printf("Enter the second fraction :");
	scanf ("%d/%d", &num2, &denom2);

	printf("The sum is %d/%d", (num1*denom2) + (num2*denom1), denom1*denom2);
}
