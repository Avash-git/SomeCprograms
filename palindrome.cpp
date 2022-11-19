#include<stdio.h>
int main (){
	int x,y=0,r,c;
	printf("Enter a number: \n");
	scanf("%d",&x);
	c=x;
	while(x!=0){
		r=x%10;
		y=y*10+r;
		x=x/10;
		
	}
		if(y==c){
			printf("The number is palindrome");
			
		}
		else{
			printf("The number is not palindrome");
		}
	return 0;
}

