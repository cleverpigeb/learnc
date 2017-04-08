/*习题 1-4*/

#include <stdio.h>
#include <math.h>

int main(void){
	int n, s, c;

	scanf("%d", &n);

	s = sin(n);
	c = cos(n);

	printf("%d %d\n", s, c);

	return 0;
}