#include<stdio.h>
#include<stdlib.h>
int addbyone(int);
main(){
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}
int addbyone(int &xref){
	xref++;
	printf("xref=%d", xref);
	return xref;
}