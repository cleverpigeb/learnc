/*习题 2-1*/

#include <stdio.h>

int main(void){
	int i, w;
	unsigned long long n;

	scanf("%lld", &n);

	if(n == 0){
		n = 1;
	}

	w = 1;

	for(; n > 0; ) {
		if(n != 0) {
			n /= 10;
			w++;
		}
	}

	w--;

	printf("%d\n", w);

	return 0;
}