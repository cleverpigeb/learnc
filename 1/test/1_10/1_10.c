/*习题 1-10*/

#include <stdio.h>

int main(void){
	long y;

	scanf("%ld", &y);

	if(y % 100 == 0){
		if(y % 400 == 0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	else{
		if(y % 4 == 0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}

	return 0;
}