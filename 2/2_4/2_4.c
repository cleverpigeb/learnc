/*3n + 1 问题*/

#include <stdio.h>

int main(void){
	long long n, count;

	count = 0;

	scanf("%lld", &n);

	while(n > 1){
		if(n % 2 == 1){
			n = n * 3 + 1;
		}
		else{
			n /= 2;
		}

		count++;
	}

	printf("%lld\n", count);

	return 0;
}