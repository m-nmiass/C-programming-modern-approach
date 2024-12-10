/********************************************
*   Advanced version of "sphere volume.c"   *
*         the user enter the radius         *
********************************************/
#include<stdio.h>

#define pi 3.141592f
#define fraction 4.0f/3.0f

int main ()
{
	int r ;
	float v ;

	printf("Enter the radius :");
	scanf ("%d" ,&r);

	v = fraction * pi * r * r * r ;

	printf("The volume of the sphare is :%.2f" , v);
}
