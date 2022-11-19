////THIS IS FOR SQUARE
//
#include<stdio.h>
int main (){
	
	int n,i,j;
	printf("Enter number of row: ");
	scanf("%d",&n);
for (i=0;i<n;i++){	
	
		for (j=0;j<n;j++){
			
		printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}

/*#include<stdio.h>
int main (){
	
	int n,i,j;
	printf("Enter number of row: ");
	scanf("%d",&n);	
	for (i=0;i<n;i++){//for(i=1;i<=n;i++)
		
		for (j=0;j<i+1;j++){//for(j=1;j<=i;j++)
			printf("*");
		}
		printf("\n");
	}	
	
	return 0;
}*/
