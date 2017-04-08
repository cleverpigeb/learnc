/*习题 1-5*/

#include <stdio.h>
#include <math.h>

int main(void){
	double x1, x2, y1, y2, d;

	scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);

	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	printf("%lf\n", d);

	return 0;
}