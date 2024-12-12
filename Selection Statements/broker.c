/***************************************************
*   This program calculate the broker commission   *
***************************************************/

#include <stdio.h>

int main ()
{
	float v ;

	printf("Enter the value of trade :");
	scanf ("%f", &v);

	if (v < 2500)
		v = v * .017f + 30.0f ;
	else if (v >= 2500 && v < 6250)
		v = v * .0066f + 56.0f ;
	else if (v >= 6250 && v < 20000)
		v = v * .0034f + 76.0f ;
	else if (v >= 20000 && v < 50000)
		v = v * .0022f + 100.0f ;
	else if (v >= 50000 && v < 500000) 
		v = v * .0011f + 155.0f ;
	else if ( v >= 500000 )
		v = v * .0009f + 255.0f ;
	if ( v < 39 )
		v = 39.0f ;

	printf ("Commission : %.2f", v );
}
