#include<stdio.h>
#include<stdlib.h>
#define size 10
main(){
	int n[size];
	printf("element\tvalue\n");
	for (int i = 0; i < size; i++){
		n[i] = 2 + 2 * i;
		printf("%3d\t%3d\n", i, n[i]);
	}
	system("pause");
}