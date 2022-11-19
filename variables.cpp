#include<stdio.h>
void display(int,int,int);
void main()
{
	int a=7,b=5,c;
	display(a<b,a==b,a<<1);
	
}
void display(int x,int y, int z)
{
	printf("%d",x+y+z)
}
/*int main(){
	int a,b,c,d;//variable 
	int a1,a3,b4;//variable with number 
	int _a,_10;//varibale with underscore
	float _a12,_sum10;//with underscore and number 
	float _19;
	float 10;//invalid
	int a b;//invalid
	int char;//invalid
	int float;//invalid
	float char;//invalid
	
return 0;
}*/
void display(int,int,int);
void main(){
	int a=7,b=5,c;
	display(a<b,a==b,a<<1);
	
}
void display(int x,int y, int z)
{
	printf("%d",x+y+z)
}
