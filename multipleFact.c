#include<stdio.h>
int Factorial(int num){
    int fact=1;
    for(int j=1;j<=num;j++){
        fact=fact*j;
    }
    return fact;
}
int main(){
    int itr, num;
    printf("Enter No of iteration you want to perform : ");
    scanf("%d", &itr);
    for(int i=1; i<=itr;i++){
        printf("enter a Number\n");
        scanf("%d",&num);
        int a= Factorial(num);
        printf("Factorail Number : %d\n", a);
    }
    return 0;
}