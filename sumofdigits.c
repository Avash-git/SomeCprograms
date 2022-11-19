//WAP to find the sum of digits 
#include<stdio.h>
//#include<string.h>
int main(){
    int n,sum=0,count,r;
printf("Enter a number:");
scanf("%d",&n);
/*do {
    r=n%10;
sum=sum+r;
    n=n/10;

}
while(n!=0)
//system("cls");

printf("Sum=%d",sum);
return 0;
}
*/
while (n!=0)
{
    r=n%10;
    sum=sum+r;
    n=n/10;
   
};
 printf("Sum=%d",sum);

return 0;
}
