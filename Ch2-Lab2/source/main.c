#include<stdio.h>
#include<stdlib.h>
main() {
	printf("  |");
	for (int i = 1; i <= 9; i++) {
		printf("%3d", i);	
	}
	printf("\n------------------------------\n");
	for (int i=1;i<=9;i++) {
		printf("%d |", i);
		for (int j=1;j<=9;j++) {
			printf("%3d", i*j);
		}
		printf("\n");
	}
	system("pause");
}