#include<stdio.h>
int main(){
	//0 1 1 2 3 5 8 13 21 34 
	//0 1 
    int a=-1,b=1,c,n,i;
    
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    //system("cls");
    for ( i = 1; i <=n; i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    
    return 0;
}
