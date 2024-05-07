#include<stdio.h>
void swap(int *px ,int *py){
    *px=*px+*py;
    *py=*px-*py;
    *px=*px-*py;
}
int main(){
    int x, y;
    printf("Enter a Number N1 : ");
    scanf("%d", &x);
    printf("Enter a Number N2: ");
    scanf("%d", &y);
    swap(&x,&y);
    printf("N1 : %d\n", x);
    printf("N2 : %d\n", y);
    // printf("%d\n", *px);
}