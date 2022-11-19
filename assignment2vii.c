#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("student.dat","w+");
    char S_name[50],S_address[50];
    int i,n,S_id;
    printf("Enter the number of student:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Id, Name and Address of student %d:\n",i+1);
        scanf("%d %s %s",&S_id,S_name,S_address);
        fprintf(fp,"%d %s %s",S_id,S_name,S_address);
        
    }
    if(fp!=NULL)
    printf("Stored Successfully\n");

    fclose(fp);

fp=fopen("student.dat","r");
while(fscanf(fp,"%d%s%s",&S_id,S_name,S_address)!=EOF){
 if(S_id>501){
            printf("Id=%d\n Name=%s\n Address=%s\n\n",S_id,S_name,S_address);
    }
}
fclose(fp);

return 0;
    
}
 