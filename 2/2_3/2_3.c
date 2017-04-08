/*7744 问题（2）*/

#include <stdio.h>

int main(void){
	int i, n, hi, lo;

	for(i = 1; ; i++){
		n = i * i;

		if(n < 1000){
			continue;
		}

		if(n > 9999){
			break;
		}

		hi = n / 100;
		lo = n % 100;

		if(hi / 10 == hi % 10 && lo / 10 == lo % 10){
			printf("%d\n", n);
		}
	}

	return 0;
}