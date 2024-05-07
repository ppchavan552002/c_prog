#include<stdio.h>
void Area(int s){
    int a;
    a=s*s;
    printf("Square of the Number : %d", a);
}
int main(){
    int side;
    printf("enter side of square : ");
    scanf("%d", &side);
    Area(side);
}