#include<stdio.h>
#include<string.h>
int main(){
    char source[]="Welcome ";
    char dest[]="hi how are you";

    strcat(source,dest);

    printf("%s", source);
}