// Inserted Formatted data into the file.
#include<stdio.h>

void main(){
    char name[20], ch;
    int roll, age;
    float marks;
    FILE *fp = fopen("studentData.txt", "w");
    if(fp == NULL)
    {
        printf("File cannot be created.");
        exit(1);
    }

    printf("Do you want to enter new record(Y/N): ");
    ch = getche();

    while(ch == 'y' || ch == 'Y'){

        printf("\nEnter student data--\n");
        printf("Enter student name: ");
        scanf("%s", name);

        printf("Enter student rollNo. : ");
        scanf("%d", &roll);
        printf("Enter student age: ");
        scanf("%d", &age);
        printf("Enter student marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%d\t%s\t\t%d\t%.2f\n", roll, name, age, marks);
        printf("Data inserted successfully...\n");

        printf("Do you want to enter new record(Y/N): ");
        ch = getche();
    }

    fclose(fp);
}
