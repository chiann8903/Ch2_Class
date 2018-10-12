#include<stdio.h>
#include<stdlib.h>
main() {
	int a = 5, b = 6;
	//===========
	printf("(1)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10;j++) {
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
	//===========
	printf("(2)\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i != 4 && i != 5 && i != 6 && i!=7)
				printf("X");
			if (i==4||i==5||i==6||i==7) {
				if (j == 4 || j == 5 || j == 6 || j == 7)
					printf("-");
				else
					printf("X");
			}
		}
		printf("\n");
	}
	printf("\n");
	//===========
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
	//============
	printf("(4)\n");
	int c = 1, d = 9;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i <=5 && j == c && i>1) {
				printf("X");
			}
			else if (i <=5 && j == d && i>1) {
				printf("X");
				d--;
			}
			else if (i <=5 && j != c && j != d && i>1)
				printf("-");
			else if (i == 1)
				printf("X");
			else
				printf("-");
		}
		c++;
		printf("\n");
	}
	//==========
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
	//============
	system("pause");
}