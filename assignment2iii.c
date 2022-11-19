#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("faculty.txt","w");
    char name[50],faculty[50];
    int id,ph_no,i;
    
    for(i=0;i<2;i++){
    printf("Enter the ID,Name,Faculty and Phone Number of Employee %d:",i+1);
    scanf("%d%s%s%d",&id,name,faculty,&ph_no);
    fprintf(fptr,"%d\n%s\n%s\n%d\n",id,name,faculty,ph_no);
    
    };
    fclose(fptr);
    fopen("faculty.txt","r");
    while (fscanf(fptr,"%d%s%s%d",&id,name,faculty,&ph_no)!=EOF)
    {
        printf("Id=%d\nName=%s\nFaculty=%s\nPhone Number=%d\n",id,name,faculty,ph_no);
    }
    fclose(fptr);
    
    return 0;
}