#include<stdio.h>
#include<stdlib.h>
int HanXin4() {
	printf("(4)\n");
	int c = 1, d = 9;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i <= 5 && j == c && i > 1) {
				printf("X");
			}
			else if (i <= 5 && j == d && i > 1) {
				printf("X");
				d--;
			}
			else if (i <= 5 && j != c && j != d && i > 1)
				printf("-");
			else if (i == 1)
				printf("X");
			else
				printf("-");
		}
		c++;
		printf("\n");
	}
}