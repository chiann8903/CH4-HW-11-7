#include<stdio.h>
#include<stdlib.h>
main(){
	int n[10];
	printf("element\tvalue\n");
	for (int i = 0; i < 10; i++){
		n[i] = 0;
		printf("%3d\t%3d\n", i, n[i]);
	}
	system("pause");
}