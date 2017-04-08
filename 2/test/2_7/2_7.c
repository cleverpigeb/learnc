/*习题 2-7*/

#include <stdio.h>

int main(void)  {
	double a;
	int i;

	a = 0.0;

	for(i = 1; 2 * i - 1 < 1000000; i++) {
		if(i % 2 == 1) {
			a += 1.0 / (2 * i - 1);
		} else {
			a -= 1.0 / (2 * i - 1);
		}		
	}

	printf("%lf\n", a);

	return 0;
}