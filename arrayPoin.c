#include<stdio.h>
int main(){
    int a=10;
    int *b=&a;

    int c=20, d=30;
    int *add[3];

    add[0]=&a;
    add[1]=&c;
    add[2]=&d;

    for(int i=0;i<3;i++){
        printf("%d\n",*add[i]);
    }
    return 0;
}