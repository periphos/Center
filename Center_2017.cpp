#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	int lottery;

	int a;
	int b;
	int c;

	srand(time(NULL));

	a = rand() % 4;
	b = rand() % 4;

	if (a < 2) {

		printf("a = miss\n");

	}
	else {

		printf("a = hit\n");

	}
	if (b < 2) {

		printf("b = miss\n");

	}
	else {

		printf("b = hit\n");

	}
	
	if(a > 1 && b > 1 ) {

		printf("c = miss\n");
	}
	else {

		if (a < 2 && b < 2) {

			c = rand() % 2;

			//printf("%d\n", c);

			if (c == 0) {

				printf("c  = miss\n");

			}
			else {

				printf("c = hit\n");
			}
		}else{

			printf("c = hit\n");


		}

	}

 
	//printf("%d\n", a);
	//printf("%d\n", b);
	return 0;
}

	


