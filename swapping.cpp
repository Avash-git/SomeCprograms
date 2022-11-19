/*Swapping of two value using 3 variables*/
#include<stdio.h>
int main (){
	int a=10;
	int b=5;
	int c;
	printf("Before swapping: a=%d,b=%d\n",a,b);
	c=a; 
	a=b;
	b=c;
	printf("After swapping: a=%d,b=%d",a,b);
	return 0;
	
}
