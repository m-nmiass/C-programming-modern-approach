/**************************************
*   computes the volume of a sphere   * 
*         with 10 meter radius	      *
**************************************/

#include <stdio.h>

#define pi 3.141592f
#define fraction 4.0f/3.0f

int main ()
{
	int radius = 10 ;
	
	float v = fraction * pi * radius * radius *radius ;

	printf ("The volume of a sphere with a 10 meter radius is : %.2f" , v );
}
