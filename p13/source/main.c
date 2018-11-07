#include<stdio.h>
#include<stdlib.h>
void printarr(int);
main(){
	int arr1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int arr2[2][3] = { 1, 2, 3, 4, 5 };
	int arr3[2][3] = { { 1, 2 }, { 4 } };
	printf("values in arr1 by row are:\n");
	printarr(arr1);
	printf("values in arr2 by row are:\n");
	printarr(arr2);
	printf("values in arr3 by row are:\n");
	printarr(arr3);
	system("pause");
}
void printarr(int arr[2][3]){
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}