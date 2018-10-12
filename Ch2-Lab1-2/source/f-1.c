#include<stdio.h>
#include<stdlib.h>
int HanXin1() {
	printf("(1)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i == 1 || i == 10)
				printf("X");
			if (i != 1 && i != 10) {
				if (j != 1 && j != 10)
					printf("-");
				else
					printf("X");
			}
		}
		printf("\n");
	}
	printf("\n");
}