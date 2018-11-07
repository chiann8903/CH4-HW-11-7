#include<stdio.h>
#include<stdlib.h>
#define size 100
int search(int, int, int);
main(){
	int a[size];
	int searchkey;
	int element;
	for (int i = 0; i < size; i++){
		a[i] = 2 * i;
	}
	printf("enter integer search key:\n");
	scanf_s("%d", &searchkey);
	element = search(a, searchkey, size);
	if (element != -1){
		printf("found value in element %d\n", element);
	}
	else{
		printf("value not found\n");
	}
	system("pause");
}
int search(int arr[], int key, int s){
	for (int j = 0; j < s; j++){
		if (arr[j] == key){
			return j;
		}
	}
	return -1;
}
