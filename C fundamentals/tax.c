/********************************************
*     print the value with 5% tax added     *
********************************************/

#include <stdio.h>

int main ()
{
	float m ;
	
	printf("Enter the amount :");
	scanf ("%f" ,&m );

	printf("With tax added : %.2f" , m * ( 1 + 5.0f / 100.0f ));
}
