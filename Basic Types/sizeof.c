/**************************************
*   prints the siezof of the values   *
**************************************/

#include <stdio.h>

int main ()
{

	printf ("sizeof int is : %d\n", sizeof(int));
	printf ("sizeof short int is : %d\n", sizeof(short int));
	printf ("sizeof long int is : %d\n", sizeof(long int));
	printf ("sizeof long long int is : %d\n", sizeof(long long int));
	printf ("sizeof float is : %d\nsizeof double is : %d\nsizeof long double is : %d",
			sizeof(float), sizeof(double), sizeof(long double));

}
