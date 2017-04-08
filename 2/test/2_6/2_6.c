/*
	习题 2-6
	可能有误差，不过可能很小
*/

#include <stdio.h>

int main(void) {
	int i, n;
	double d, s;

	d = 0.0;
	s = 0.0;

	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		d = 1.0 / i;
		s += d;
	}

	printf("%.03lf\n", s);

	return 0;
}