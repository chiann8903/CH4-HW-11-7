#include<stdio.h>
#include<stdlib.h>
main(){
	char str1[20];
	char str2[] = "string literal";
	printf("enter a string :");
	scanf_s("%s", str1);
	printf("string1 is : %s\nstring2 is : %s""string1 with spaces between charaters is \n", str1, str2);
	for (int i = 0; str1[i] != '\0'; i++){
		printf("%c", str1[i]);
	}
	printf("\n");
	system("pause");
}