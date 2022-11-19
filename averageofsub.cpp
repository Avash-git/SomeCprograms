/*Input markes of 5 subject and find the average mark */
#include <stdio.h>
int main(){
printf("***************The average of a student(Enter it out of 100)**********\n");
	int m,a,c,e,el;
	float average,percentage,total;
	printf("Enter the marks of Mathematics: ");
	scanf("%d",&m);
	printf("\nEnter the marks of Financial accounting: ");
	scanf("%d",&a);
	printf("\nEnter the marks of C-Programming: ");
	scanf("%d",&c);
	printf("\nEnter the marks of English: ");
	scanf("%d",&e);
	printf("\nEnter the marks of Electrical: ");
	scanf("%d",&el);
	total=(m+a+c+e+el);
	average=total/5;
	percentage=(total/500)*100;
	
	if(average>40){
		printf("The student passed");
	}
	else{
		printf("The student failed");
	}
	printf("\nThe average mark of the student =%0.2f",average);
	printf("\n The percentage of the student =%0.2f %",percentage);
	return 0;	
/*	OR
printf("\nEnter the marks of six subjects:");
	scanf("%d%d%d%d%d%d",&d,&c,&e,&ca,&m,&p);
	average=(d+e+c+ca+m+p)/6;
	printf("\n averge=%f",average);
	return 0;*/
}
