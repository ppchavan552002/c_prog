#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    printf("enter first string\n");
    scanf("%s",&str1);
    printf("enter second string\n");
    scanf("%s",&str2);
    int a=strcmp(str1,str2);
    if(a==1){
        printf("first string is gretest %s",str1);
    }else if(a==-1){
        printf("second string is gretest %s",str2);
    }else{
        printf("both string are equal %s and %s",str1,str2);
    }
}