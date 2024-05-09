#include<stdio.h>
int main(){
    int const s=10;

    enum colors {RED=20,WHITE, PINK=78, BLACK};

    enum colors bgcolor=RED;

    printf("%d\n",bgcolor);

    printf("%d\n",WHITE);

    printf("%d\n",PINK);

    printf("%d",BLACK);

}