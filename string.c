#include<stdio.h>
int main(){
    char name[15];
    printf("Enter a Name: \n");
    // scanf("%s",name);
    fgets(name,sizeof(name),stdin);
    printf("%8s\n",name);
    puts(name);
}