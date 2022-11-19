#include<stdio.h>
int main(){
    char name[30],address[50];
    int colz_id;
    int i,n;
    FILE *fp;
    fp=fopen("college.txt","w");
    
    printf("Enter the number of colleges In Pokhara University:\n");
    scanf("%d",&n);

for(i=0;i<n;i++){
        printf("Enter the Name of College %d:",i+1);
        scanf("%s",name);
        printf("Enter the Address of College %d:",i+1);
        scanf("%s",address);
        printf("Enter the College Id  of College %d:",i+1);
        scanf("%d",&colz_id);\
        fprintf(fp,"%s\n%s\n%d\n",name,address,colz_id);

    }


    fclose(fp);
    fp=fopen("College.txt","r");
    while(fscanf(fp,"%s%s%d",name,address,&colz_id)!=EOF)//End of File 
    {
printf("Name=%s\n Address= %s\n Id=%d\n",name,address,colz_id);
    }
    fclose(fp);
    return 0;

}