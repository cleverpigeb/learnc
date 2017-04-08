/*圆柱体的表面积*/

#include <stdio.h>
#include <math.h>

int main(void){
	const double PI = 4.0 * atan(1.0);

	double r, h, s1, s2, s;

	scanf("%lf%lf", &r, &h);

	s1 = PI * r * r;
	s2 = 2 * PI * r * h;
	s = s1 * 2.0 + s2;

	printf("Area = %3lf\n", s);

	return 0;
}