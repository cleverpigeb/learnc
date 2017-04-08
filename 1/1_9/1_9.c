/*变量交换（2）*/

#include <stdio.h>

int main(void){
	int a, b;

	scanf("%d%d", &a, &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d %d\n", a, b);

	return 0;
}