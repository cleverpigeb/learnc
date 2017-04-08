/*习题 1-3*/

#include <stdio.h>

int main(void){
	long long n, s;

	scanf("%lld", &n);

	s = (1 + n) * n/2;

	printf("%lld\n", s);

	return 0;
}