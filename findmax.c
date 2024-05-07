#include<stdio.h>
int find(int ,int);
int main(){
    int a,b;
    printf("enter Two Number\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int max=find(a,b);
    printf("Max Number : %d", max);

}
int find(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
/*
My Name is Prathamesh Popat X
*/