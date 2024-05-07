#include<stdio.h>
void acceptname(char name[]){
    fgets(name,14,stdin);
}
void displayname(char name[]){
    puts(name);
}
int main(){
    char stud_name[15];
    printf("Enter name of student: \n");
    acceptname(stud_name);
    displayname(stud_name);
}