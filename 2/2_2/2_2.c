/*7744 问题（1）*/

#include <stdio.h>
#include <math.h>

int main(void){
	int i, j, n;
	double m;

	for(i = 1; i <= 9; i++){
		for(j = 0; j <= 9; j++){
			n = i * 1100 + j * 11;
			m = sqrt(n);

			if(floor(m + 0.5) == m){
				printf("%d\n", n);
			}
		}
	}

	return 0;
}