/*习题 1-8*/

#include <stdio.h>
#include <math.h>

int main(void){
	double n, a;

	scanf("%lf", &n);

	a = fabs(n);

	printf("%.02lf\n", a);

	return 0;
}