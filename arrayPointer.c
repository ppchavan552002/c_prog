#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p1, *p2;

    p1=&arr[0];
    p2=&arr[1];

    p2=p1;
    printf("%d\n", p1);
    printf("%d\n", p2);

    p2=p2+3;
    printf("%d\n", p2);

    return 0;
}