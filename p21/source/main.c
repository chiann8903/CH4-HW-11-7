#include<stdio.h>
#include<stdlib.h>
void staticarray(void);
void automatic(void);
main(){
	printf("first call to each fuction:\n");
	staticarray();
	automatic();
	printf("\n\nsecond call to each fuction:\n");
	staticarray();
	automatic();
	printf("\n");
	system("pause");
}
void staticarray(void){
	static int arr1[3];
	printf("\nvalues on entering staticArrayInit:\n");
	for (int i = 0; i < 3; i++){
		printf("arr1[%d] = %d ", i, arr1[i]);
	}
	
	printf("\nvalues on exiting staticArrayInit:\n");
	for (int i = 0; i < 3; i++){
		printf("arr1[%d] = %d ", i, arr1[i] += 5);
	}
}
void automatic(void){
	int arr2[3] = { 1, 2, 3 };
	printf("\n\nvalues on entering automaticArrayInit:\n");
	for (int i = 0; i < 3; i++){
		printf("arr2[%d] = %d ", i, arr2[i]);
	}
	printf("\nvalues on exiting automaticArrayInit:\n");
	for (int i = 0; i < 3; i++){
		printf("arr2[%d] = %d ", i, arr2[i] += 5);
	}
}