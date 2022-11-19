//Greatest among three numbers

#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the third number:");
	scanf("%d",&c);
	/*
	//Greatest among three numbers
	if(a>b&&a>c)
		printf("The first number is the greatest");
	if(b>a&&b>c)	
		printf("The second number is the greatest");
	if(c>b&&c>a)	
		printf("The third number is the greatest");
*/
//Smallest among three
if (a<b&&a<c)
	printf("The first number is the smallest");
if (b<c&&b<a)
	printf("The second number is the smallest");
if (c<a&&c<b)
	printf("The thrid number is the smallest");
}

