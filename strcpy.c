#include<stdio.h>
#include<string.h>
int main(){
    char name_1[]="prathamesh";
    char name_2[20];
    strcpy(name_2,name_1);
    printf("1st %s\n",name_1);
    printf("2st %s",name_2);

}