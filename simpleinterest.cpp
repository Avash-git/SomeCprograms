//Simple Interest
#include<stdio.h>
int main(){
 float p,t,r,i;
 printf("Enter the principle:");
 scanf("%f",&p);
  printf("Enter the rate:");
 scanf("%f",&r);
  printf("Enter the time:");
 scanf("%f",&t);
 i=(p*t*r)/100;
 
  printf("The Interest=%.2f",i);
 
	return 0;
}
