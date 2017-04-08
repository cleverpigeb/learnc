/*习题 2-5*/
/*只能输入 10，要不然会出问题的*/

#include <stdio.h>

int main(void) {
	FILE *fin, *fout;
	int n, m, s, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;

	fin = fopen("stat.in", "rb");
	fout = fopen("stat.out", "wb");
	s = 0;

	scanf("%d", &n);

	while(fscanf(fin, "%d%d%d%d%d%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10) == n) {
		fscanf(fin, "%d", &m);

		if(x1 < m) {
			s++;
		}

		if(x2 < m) {
			s++;
		}

		if(x3 < m) {
			s++;
		}

		if(x4 < m) {
			s++;
		}

		if(x5 < m) {
			s++;
		}

		if(x6 < m) {
			s++;
		}

		if(x7 < m) {
			s++;
		}

		if(x8 < m) {
			s++;
		}

		if(x9 < m) {
			s++;
		}

		if(x10 < m) {
			s++;
		}
	}

	fprintf(fout, "%d\n", s);

	fclose(fin);
	fclose(fout);

	return 0;
}