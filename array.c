#include<stdio.h>
int main(){
    int mark[10];
    printf("enter no\n");
    for(int i=0;i<10;i++){
        scanf("%d", &mark[i]);
    }
    printf("array element\n");
    for(int i=0;i<10;i++){
        printf("%d ", mark[i]);
    }
    printf("\nadress of first element %d\n", mark);
    printf("value of first element %d\n", *mark);
    printf("value of second element %d\n", *(mark+1));
    return 0;
}