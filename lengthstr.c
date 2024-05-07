#include<stdio.h>
#include<string.h>
int str_1(char *str){
    int len=0;
    for(;*str !='\0';str++){
        len++;
    }
    return len;
}
int main(){
    int length=0;
    char name[]="prathamesh";
    length=str_1(name);
    printf("%d",length);
}
