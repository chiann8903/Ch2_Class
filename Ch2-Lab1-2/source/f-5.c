#include<stdio.h>
#include<stdlib.h>
int HanXin5() {
	printf("(5)\n");
	int e = 1, f = 10;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i == e && j == e)
				printf("X");
			else if (j == f && i == e) {
				printf("X");
				f--;
			}
			else
				printf("-");
		}
		e++;
		printf("\n");
	}
}