#include<stdio.h>

void main(){
    int roll,age;
    float marks;
    char name[20];
    printf("Student Records are:\n\n");
    FILE *fp=fopen("studentData.txt","r");
    if(fp==NULL){
        printf("Error!!!");
        exit(1);
    }
    int rs=fscanf(fp, "%d\t%s\t%d\t%f\n",&roll,name,&age,&marks );
    while(rs != EOF)
    {
         printf("%d\t%s\t%d\t%f\n", roll,name,age,marks);
         rs=fscanf(fp, "%d\t%s\t%d\t%f\n",&roll,name,&age,&marks );
    }



    fclose(fp);

}
