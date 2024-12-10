/**************************************************
*    this program change fahrenheit to celsius    *
**************************************************/

#include <stdio.h>
#define pt 32.0f
#define factor (5.0f / 9.0f)

int main ()
{
	float fahrenheit , celsius ;

	printf("Enter Fahrenheit temperature :");
	scanf ("%f" ,&fahrenheit);
	
	celsius = (fahrenheit - pt) / factor ;

	printf("Celsius equivalent :%.2f" ,celsius) ;

	return 0 ;
}
