#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	
	int dice;
	int balls;

	srand(time(NULL));

	dice = rand() % 6 + 1;

	printf("èoñ⁄ = %d \n", dice);

	if (dice % 3 == 0) {

		printf("ë‹ = îí\n");

		balls = rand() % 2 ; 

		if (balls == 0) {
			printf("ã  = îí(%d)\n", balls);
		}
		else {
			printf("ã  = ê‘(%d)\n", balls);
		}

	}
	else {
		
		printf("ë‹ = ê‘\n");

		balls = rand() % 3;

		if (balls == 0) {
			printf("ã  = îí(%d)\n", balls);
		}
		else {
			printf("ã  = ê‘(%d)\n", balls);
		}
	}

	return 0;
	
}