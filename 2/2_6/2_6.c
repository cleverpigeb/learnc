/*阶乘之和（2）*/

#include <stdio.h>
#include <time.h>

int main(void){
	const long MOD = 1000000;
	long long i, j, n, s;

	s = 0;

	scanf("%lld", &n);

	for(i = 1; i <= n; i++){
		long long factorial;

		factorial = 1;

		for(j = 1; j <= i; j++){
			factorial *= j;
		}

		s = (s + factorial) % MOD;
	}

	printf("%lld\n", s);
	printf("Time used = %.2lf\n", (double)clock() / CLOCKS_PER_SEC);

	return 0;
}