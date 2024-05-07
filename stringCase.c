#include<stdio.h>
int main(){
    char letter[]="Learning";
    char ch;
    int i=0,count=0;
    while (letter[i]!='\0')
    {
        if(letter[i] >=65 && letter[i] <=90){
            letter[i]=letter[i]+32;
        }else if(letter[i] >=97 && letter[i] <=122){
            letter[i]=letter[i]-32;
        }
        i++;
    }
    printf("%s is count of vowals",letter);
}