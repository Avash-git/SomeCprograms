//calculator
#include<stdio.h>
int main(){
	int a,b;
	float add,sub,mul,div;
	int mod;
	printf("\nEnter a number: ");
	scanf("%d",&a);
	printf("\n Enter another number:");
	scanf("%d",&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	
	printf("\n The addtion of the number is %.2f",add);
		printf("\n The addtion of the number is %.2f",sub);
			printf("\n The addtion of the number is %.2f",mul);
				printf("\n The addtion of the number is %.2f",div);
					printf("\n The addtion of the number is %d",mod);
	
	return 0;
}
