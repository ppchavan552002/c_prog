#include<stdio.h>
void swap(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swaped Number are \n a : %d \n b : %d", a,b);

}
int main(){
    int a, b;
    printf("Enter a Two number\n");
    printf(" a : ");
    scanf("%d", &a);
    printf(" b : ");
    scanf("%d", &b);
    swap(a, b);

}