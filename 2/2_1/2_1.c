/*输出 1, 2, 3,······, n 的值*/

#include <stdio.h>

int main(void){
	int i, n;

	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		printf("%d\n", i);
	}

	return 0;
}