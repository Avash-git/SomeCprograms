#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("\nEnter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
     printf("%d\t",fact);   
    }

    return 0;
}