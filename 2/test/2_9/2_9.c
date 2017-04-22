/*习题 2-9*/

#include <stdio.h>

int main(void) {
	unsigned int a, b, c;
	double d;
	char fmt[100];

	scanf("%d%d%d", &a, &b, &c);
	snprintf(fmt, 99, "%%.0%dlf\n", c);

	d = (double)a / (double)b;

	printf(fmt, d);

	return 0;
}