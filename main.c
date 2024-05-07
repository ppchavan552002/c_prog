#include<stdio.h>
#include "myfun.c"
extern float rateOfInfo ;
void dispSimInt(){
    
    printf("%f",rateOfInfo);
}
int main(){
    dispSimInt();
}

