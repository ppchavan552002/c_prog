#include<stdio.h>
int main(int argc, char *argv[]){
    /**
     * @brief argc = argument count
     * argv = argument string vector
     */
    if(argc!=3){
        printf("Plase enter three arguments ");
    }
    printf("\n %S",argv[1]);
    printf("\n %s",argv[2]);
}