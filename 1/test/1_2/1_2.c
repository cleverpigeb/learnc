/*习题 1-2*/

#include <stdio.h>

int main(void){
	double f, c;

	scanf("%lf", &f);

	c = 5 * (f - 32)/9;

	printf("%.03lf\n", c);

	return 0;
}