/***********************************************
*   Function to check if the number is prime   *
***********************************************/

_Bool is_prime (int n)
{
	if (n <= 1)
		return 0 ;
	int i = n - 1 ;
	while (i > 1)
	{
		if (n % i == 0)
			return 0 ;
		i-- ;
	}
	return 1 ;
}
