#include<stdio.h>
void circule(double r){
    double Area, circumfernce;
    Area=3.14*r*r;
    circumfernce=2*3.14*r;
    printf("Area of Circule : %lf \n Circumfernce of Circule : %lf", Area, circumfernce);
}
int main(){
    double Radius;
    printf("Enter Radius of Circule : ");
    scanf("%lf",&Radius);
    circule(Radius);
}