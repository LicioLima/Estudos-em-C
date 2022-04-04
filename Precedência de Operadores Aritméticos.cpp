#include <stdio.h>
int main()
{
	double a=1, b=2, c=3, d=4, res;
	res = c * (++d - a) / (--b + 1);
	printf("O valor de res = %.f\n", res);
	return 0;
}