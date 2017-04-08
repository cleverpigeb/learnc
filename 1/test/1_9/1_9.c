/*习题 1-9*/

#include <stdio.h>

int main(void){
	int a, b, c, x, y, z;

	scanf("%d%d%d", &a, &b, &c);

	x = a;

	if(b < x){
		x = b;
	}

	if(c < x){
		x = c;
	}

	z = a;

	if(b > z){
		z = b;
	}

	if(c > z){
		z = c;
	}

	y = a + b + c - x - z;

	if(x + y <= z){
		printf("not a triangle\n");
	}
	else if(x * x + y * y == z * z){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}

	return  0;
}