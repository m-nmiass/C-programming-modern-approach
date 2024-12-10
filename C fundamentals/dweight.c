/*****************************************************************************************************************
*														 *
*      To calculate shipping costs shipping companies in USA use "demesional weight (DIM)" or "actual weight"    *
*		this program will computes the dimensional weight of 12 x 10 x 8 box and 166 as DIM 		 *
*														 *
*****************************************************************************************************************/

#include <stdio.h>

int main ()
{
	int height, length, width, volume, DIM;

	height = 8 ;
	width = 10 ;
	length = 12 ;
	volume = height * width * length ;
	DIM = (volume + 165) / 166 ;

	printf("Dimensions: %dx%dx%d\n", height, width, length);
	printf("Volume: %d\n", volume);
	printf("Dimentional weight: %d", DIM);
	return 0;
}
