#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char w1[20],w2[20];
    int n;

    int count = 0;
    printf("Enter the word to be replace : ");
    scanf("%s", w1);
    printf("Enter the word that will replace : ");
    scanf("%s", w2);
    printf("ENter the number of times the replacement to be done = ");
    scanf("%d", &n);

    int len = strlen(w1);
    FILE *fptr;
    char str[5000];
    fptr = fopen("FILE.txt", "r");
    int  k = 0;

    char c = fgetc(fptr);
    
    while(c!=EOF){
        str[k] = c;
        ++k;
        c=c+1;
    }

    fclose(fptr);

    fptr = fopen("FILE.txt","w");


    for(int i = 0; i<k; i++){
        if(n<0 || count<n){
        for(int j = 0; j<len;j++){
            if(str[i+j]==w1[j]){continue;}
            else{goto label;}
        }
        fprintf(fptr,"%s",w2);
        i+=len;
        count++;}
        label:
        fputc(str[i],fptr);
    }
    
    if(count!=n && n>=0){printf("Replacement done %d times\n", count);}
    fclose(fptr);

    return 0;}