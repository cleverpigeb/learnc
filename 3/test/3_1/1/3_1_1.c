/*习题 3-1 的任务一*/

#include <stdio.h>
#define MAXN 100 + 10

int count[MAXN];

/*
	*函数名称：main
	*功能描述：分数里哪个数出现的最多
	*参数列表：无
	*返回结果：0
*/
int main(void) {
	int i, n, tf, max;

	tf = 1;
	max = 0;

	for (i = 0; i < 101; i++) {
		count[i] = 0;
	}

	while (tf) {
		scanf("%d", &n);

		if (n < 0) {
			tf = 0;
		}

		count[n]++;
	}

	for (i = 1; i <= 100; i++) {
		if (count[i] > max) {
			max = count[i];
		}
	}
	for (i = 1; i <= 100; i++) {
		if (count[i] == max) {
			printf("%d \n", i);
		}
	}

	return 0;
}