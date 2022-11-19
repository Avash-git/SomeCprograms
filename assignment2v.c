#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("student.txt","w");
    char name[50],address[50];
    int i,symbol;

    for(i=0;i<2;i++){
        printf("Enter the name ,symbol no and address of student %d",i+1);
        scanf("%s%d%s",name,&symbol,address);
        fprintf(fp,"%s%d%s",name,symbol,address);
    }
    if(fp!=NULL){
        printf("Stored Successfully");
    }
    else{
        printf("something went wrong");
        
    }
    fclose(fp);
    return 0;

}