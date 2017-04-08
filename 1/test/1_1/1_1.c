/*习题 1-1*/

#include <stdio.h>

int main(void){
	long long a, b, c;

	double t;

	scanf("%lld%lld%lld", &a, &b, &c);

	t = (a + b + c)/3.0;

	printf("%.03lf\n", t);

	return 0;
}