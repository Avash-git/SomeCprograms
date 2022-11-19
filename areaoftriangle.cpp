#include<stdio.h>
int main(){
	int b,h;
	float a;
	printf("Enter the breath:\n");
	scanf("%d",&b);
	printf("Enter the height: \n");
		scanf("%d",&h);
	a=0.5*b*h;
	printf("THe area of the triangle is %0.2f",a);
	return 0;
}
