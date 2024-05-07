#include<stdio.h>
#include<string.h>
int main(){
    char num[20], num2[20];
    printf("enter number\n");
    scanf("%s",&num);
    strcpy(num2,num);
    strrev(num2);
    int a=strcmp(num,num2);
    if(a==0){
        printf("entered string is paliendrome");
    }else{
        printf("entered string is not paliendrome");

    }
}