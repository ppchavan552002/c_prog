#include<stdio.h>
int main(){
    const float PI=3.14f;
    float r;
    printf("enter radius: ");
    scanf("%f", &r);
    float area=PI*r*r;
    printf("area of circule : %f", area);
    return 0;
}