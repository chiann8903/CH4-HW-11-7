#include<stdio.h>
#include<stdlib.h>
#define size 5
void array(int, int);
void element(int);
main(){
	int a[size] = { 0, 1, 2, 3, 4 };
	printf("effects of passing entire array by reference:\n\n5he values of the origina; array are:\n\n");
	for (int i = 0; i< size; i++){
		printf("%3d", a[i]);
	}
	printf("\n");
	array(a, size);
	printf("the values of the modify array are:\n");
	for (int i = 0; i < size; i++){
		printf("%3d", a[i]);
	}
	printf("\n\neffects of passing array element by value:\n\nthe value of a[3] is %d\n", a[3]);
	element(a[3]);
	printf("the value of a[3] is %d\n", a[3]);
	system("pause");
}
void array(int b[], int s){
	for (int j = 0; j < s; j++){
		b[j] *= 2;
	}
}
void element(int e){
	printf("value in modifyElelment is %d\n", e *= 2);
}