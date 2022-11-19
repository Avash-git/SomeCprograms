#include<stdio.h>
int main(){
	/*int a,s;
	printf("Enter the number: \n");
	scanf("%d",&a);
	s=a*a;
	printf("The square of %d is %d",a,s);
	return 0;*/
	char fname[20],mname[20],lname[20];
	printf("Enter first middle and last name: \n");
	scanf("%s%s%s",&fname,&mname,&lname);//%s stores the whole character
	printf("Abbreviated name:%c%c%c",fname[0],mname[0],lname[0]);//%c stores only one character
	return 0;
}
