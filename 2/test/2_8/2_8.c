/*习题 2-8*/

#include <stdio.h>

int main(void) {
	int i, n, m;
	double s;

	scanf("%d%d", &n, &m);

	for(i = 0; m * m - i != n; i++) {
		s += 1.0 / ((n * n + i) * (n * n + i));
	}

	printf("%.05lf\n", s);

	return 0;
}