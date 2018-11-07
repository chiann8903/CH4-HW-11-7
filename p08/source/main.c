#include<stdio.h>
#include<stdlib.h>
#define size 10
main(){
	int n[size] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
	printf("element\tvalue\thistogram\n");
	for (int i = 0; i < size; i++){
		printf("%d\t%d\t", i, n[i]);
		for (int j = 0; j < n[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}