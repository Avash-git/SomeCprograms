/*WAP to calculate circumference of a circle having radious r"*/
#include<stdio.h>
int main(){
	int r;
	float c;
	float p=3.1415;
	printf("Enter the radius:");
	scanf("%d",&r);
	c=2*p*r;
	printf("Circumference=%0.2f",c);
	return 0;
	
}
