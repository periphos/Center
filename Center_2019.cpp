#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	
	int dice;
	int balls;

	srand(time(NULL));

	dice = rand() % 6 + 1;

	printf("�o�� = %d \n", dice);

	if (dice % 3 == 0) {

		printf("�� = ��\n");

		balls = rand() % 2 ; 

		if (balls == 0) {
			printf("�� = ��(%d)\n", balls);
		}
		else {
			printf("�� = ��(%d)\n", balls);
		}

	}
	else {
		
		printf("�� = ��\n");

		balls = rand() % 3;

		if (balls == 0) {
			printf("�� = ��(%d)\n", balls);
		}
		else {
			printf("�� = ��(%d)\n", balls);
		}
	}

	return 0;
	
}