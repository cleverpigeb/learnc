/*习题 2-4*/

#include <stdio.h>

void prints(int s, int p) {
	int i, j;

	for(i = 0; i < p; i++) {
		printf(" ");
	}

	for(j = 0; j < s; j++) {
		printf("#");
	}

	printf("\n");
}

int main(void) {
	int n, s, i;

	s = 0;

	scanf("%d", &n);

	for(i = 1 + 2 * (n - 1); i >= 1; i -= 2) {
		prints(i, s);

		s++;
	}

	return 0;
}