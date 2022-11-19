#include<stdio.h>
int display(int, int, int);
main()
{
	int a=7,b=5,c;
	display (a>b,a==b,a>>1);
}
int display(int x,int y, int z)
{
	printf("%d",x+y+z);
}
