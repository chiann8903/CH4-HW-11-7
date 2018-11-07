#include<stdio.h>
#include<stdlib.h>
#define size 12
main(){
	int n[size] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	int total=0;
	for (int i = 0; i < size; i++){
		total+=n[i];
	}
	printf("total=%d\n", total);
	system("pause");
}