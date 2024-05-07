#include<stdio.h>
#include<string.h>
int main(){
    char name_1[]="prathamesh";
    char name_2[]="avdhut";
    int length_1=strlen(name_1);
    int length_2=strlen(name_2);
    if(length_1>length_2){
        printf("length of the first name is biggest %d",length_1);
    }else if(length_1<length_2){
        printf("length of the second name is biggest %d",length_2);
    }else{
        printf("length of both string are equal ");
    }
}