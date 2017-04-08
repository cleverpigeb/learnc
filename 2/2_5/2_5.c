/*阶乘之和（1）*/

#include <stdio.h>

int main(void){
	long long i, j, n, s;

	s = 0;

	scanf("%lld", &n);

	for(i = 1; i <= n; i++){
		long long factorial;

		factorial = 1;

		for(j = 1; j <= i; j++){
			factorial *= j;
		}

		s += factorial;
	}

	printf("%lld\n", s % 1000000);

	return 0;
}