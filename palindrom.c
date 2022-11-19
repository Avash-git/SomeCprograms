#include<stdio.h>
int main (){
    int x,y=0,r,c;
    printf("\nEnter a number:");
    scanf("%d",&x);
    c=x;
    while (x!=0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;

    }
    //For Reverse Printf("Your reverse number is %d",y);
    if(c==y){
        printf("Your number is palindrome");

    }
    else{
        printf("Your number is not palindrome");
    }
    
    return 0;
}