#include<stdio.h>
void enternumber(int n){
    printf("%d\n", n);
}
int main(){
    int n;
    printf("enter Any Number : ");
    scanf("%d", &n);
    enternumber(n);
    return 0;
}