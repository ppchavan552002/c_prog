#include<stdio.h>
int main(){
    char letter[]="learning";
    char ch;
    int i=0,count=0;
    while (letter[i]!='\0')
    {
        
        if(letter[i] =='a' || letter[i] =='e' || letter[i]=='i' || letter[i]=='o' || letter[i]=='u' || letter[i]=='A' || letter[i]=='E' || letter[i]=='I' || letter[i]=='O' || letter[i]=='u'){
            count++;
        }
        i++;
    }
    printf("%d is count of vowals",count);
}