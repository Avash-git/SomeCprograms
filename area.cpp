#include<stdio.h>
int main(){
	int l,b,a1,a2;
	printf("Enter the length: \n");
		scanf("%d",&l);
	printf("Enter the breadth: \n");
	scanf("%d",&b);
	a1=l*l;
	a2=l*b;
	printf("Area of square=%d",a1);
	printf("\nArea of rectangle=%d",a2);
	return 0;
}
