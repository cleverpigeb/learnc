/*习题 1-7*/

#include <stdio.h>

int main(void){
	double n, j, y;

	scanf("%lf", &n);

	j = n * 95.0;

	if(j >= 300){
		y = j * 0.85;
	}
	else{
		y = j;
	}

	printf("%.02lf\n", y);

	return 0;
}