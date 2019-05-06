#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	
	int dice;
	int balls;

	srand(time(NULL));

	dice = rand() % 6 + 1;

	printf("dice = %d \n", dice);

	if (dice % 3 == 0) {

		printf("bag = white\n");

		balls = rand() % 2 ; 

		if (balls == 0) {
			printf("ball = white(%d)\n", balls);
		}
		else {
			printf("ball = red(%d)\n", balls);
		}

	}
	else {
		
		printf("bag = red\n");

		balls = rand() % 3;

		if (balls == 0) {
			printf("ball = white(%d)\n", balls);
		}
		else {
			printf("ball = red(%d)\n", balls);
		}
	}

	return 0;
	
}