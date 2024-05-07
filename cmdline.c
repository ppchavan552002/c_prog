#include<stdio.h>
int main(int argc, char *argv[]){
    /**
     * @brief argc = argument count
     * argv = argument string vector
     *  ./cmdline ppc chavan prathamesh   (input)                     
     *       {
     *       number of arguement 4
     *       Argument 0 C:\Users\Victory\OneDrive\Desktop\c_prog\cmdline.exe   
     *       Argument 1 ppc
     *       Argument 2 chavan
     *       Argument 3 prathamesh
     *       }output
     */
    printf("number of arguement %d\n", argc);
    for(int i=0;i<argc;i++){
        printf("Argument %d %s\n",i,argv[i]);
    }
    return 0;
}