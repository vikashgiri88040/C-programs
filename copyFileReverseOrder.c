#include<stdio.h>

void main(){
    FILE *fptr1=NULL,*fptr2=NULL;
    int ch, pos;
    fptr1=fopen("copee.txt","r");
    if(fptr1==NULL){
        printf("no file");
        exit(1);
    }
    fptr2=fopen("destination.txt","w");
    if(fptr2==NULL){
        printf("no file");
        exit(1);
    }

    fseek(fptr1, 0, SEEK_END);
    pos = ftell(fptr1);

    while (pos-- > 0) {
        fseek(fptr1, pos, SEEK_SET);
        ch = fgetc(fptr1);
        fputc(ch, fptr2);
    }

    fclose(fptr1);
    fclose(fptr2);
    printf("Successfully copied");
}
