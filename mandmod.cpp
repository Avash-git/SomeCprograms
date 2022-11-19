#include<stdio.h>
int main (){
	int a,b,m,mod;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	m=a*b;
	mod= a%b;
	printf("The multiplication of two numbers=%d \n",m);
	printf("The modulus of two number =%d",mod);
	return 0;
}
