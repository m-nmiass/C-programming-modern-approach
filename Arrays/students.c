/************************************************************************************
*   Enter five quize grades for 5 students to compute the total score and average   *
*         for each student and the average score hight score and low score          *
************************************************************************************/

#include<stdio.h>

int main()
{
	int a[5][5] ;
	int i = 0;
       	int j = 0 ;
	int l, m ;
	int s = 0 ;

	while(i < 5)
	{
		printf ("Enter grades for student n°%d : ", i+1);
		while(j < 5)
			scanf("%d", &a[i][j++]);
		i++ ;
		j = 0 ;
	}

	i = 0;
	printf ("\n");

	while(i < 5)
	{
		while (j < 5)
			s += a[i][j++] ;
		printf ("The total score of student n°%d is %d and average is %.2f\n", i+1, s, (float)s/5);
	       	i++ ;
		j = 0, s = 0 ;
	}

	i = 0 ;
	
	printf ("\n");

	while(j < 5)
	{
		l = a[i][j] ;
		m = a[i][j] ;
		while(i < 5)
		{
			if (l > a[i][j])
				l = a[i][j] ;
			if (m < a[i][j])
				m = a[i][j] ;
			s += a[i++][j] ;
		}
		printf ("The average of the quiz n°%d is %.2f and the hight score is %d and the low score is %d\n", j+1, (float)s/5, m, l);
		j++ ;
		i = 0 ;
		s = 0 ;
	}
}
