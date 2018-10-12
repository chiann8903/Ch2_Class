#include<stdio.h>
#include<stdlib.h>
int HanXin2() {
	printf("(2)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i != 4 && i != 5 && i != 6 && i != 7)
				printf("X");
			if (i == 4 || i == 5 || i == 6 || i == 7) {
				if (j == 4 || j == 5 || j == 6 || j == 7)
					printf("-");
				else
					printf("X");
			}
		}
		printf("\n");
	}
	printf("\n");
}