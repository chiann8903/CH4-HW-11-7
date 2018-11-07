#include<stdio.h>
#include<stdlib.h>
#define stu 3
#define exam 4
int minimum(int,int,int);
int maximum(int,int,int);
double av(int,int);
void printarr(int);
main(){
	int arr[stu][exam] = { { 77, 68, 86, 73 }, { 96, 87, 89, 78 }, { 70, 90, 86, 81 } };
	printf("the array is :\n");
	printarr(arr,stu,exam);
	printf("\nthe lowest grade is : %d", minimum(arr, stu, exam));
	printf("\nthe highiest grade is : %d", maximum(arr, stu, exam));
	printf("\n\n");
	for (int k = 0; k < stu; k++){
		printf("the average grade for srudent %d is : %.2f\n", k, av(arr[k], exam));
	}
	system("pause");
}
int minimum(int arrm[stu][exam],int student,int test){
	int min = 999;
	for (int i = 0; i < student; i++){
		for (int j = 0; j < test; j++){
			if (arrm[i][j] < min)
				min = arrm[i][j];
		}
	}
	return min;
}
int maximum(int arrm[stu][exam],int student, int test){
	int max=0;
	for (int i = 0; i < student; i++){
		for (int j = 0; j < test; j++){
			if (arrm[i][j] > max)
				max = arrm[i][j];
		}
	}
	return max;
}
void printarr(int arrm[stu][exam], int student, int test){
	printf("                            [0][1][2][3]\n");
	for (int i = 0; i < student; i++){
		printf("the student [%d]'s grade are :", i);
		for (int j = 0; j < test; j++){
			printf("%d ", arrm[i][j]);
		}
		printf("\n");
	}
}
double av(int arra[],int test){
	int total=0;
		for (int j = 0; j < test; j++){
			total += arra[j];
		}
		return (double)total/test;
}

