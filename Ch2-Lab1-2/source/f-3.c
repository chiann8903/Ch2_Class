#include<stdio.h>
#include<stdlib.h>
int HanXin3() {
	int a = 5, b = 6;
	printf("(3)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i < 5 && j == a) {
				printf("X");
				a--;
			}
			else if (i < 5 && j == b) {
				printf("X");
			}
			else if (i < 5 && j != a && j != b)
				printf("-");
			else if (i == 5)
				printf("X");
			else
				printf("-");
		}
		b++;
		printf("\n");
	}
}