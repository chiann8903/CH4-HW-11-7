#include<stdio.h>
#include<stdlib.h>
main(){
	int n[10] = {32,27,64,18,95,14,95,70,60,37};
	printf("element\tvalue\n");
	for (int i = 0; i < 10; i++){
		printf("%3d\t%3d\n", i, n[i]);
	}
	system("pause");
}