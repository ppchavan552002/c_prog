#include<stdio.h>
char grade(int R,int M){
    if(M>=90){
        return 'A';
    }else if(M<90 && M>=75){
        return 'B';
    }else if(M<75 && M>=60){
        return 'C';
    }else if(M<60){
        return 'D';
    }
}
int main(){
    int Roll_no, mark;
    printf("Enter Roll No : ");
    scanf("%d",&Roll_no);
    printf("Enter Roll No : ");
    scanf("%d",&mark);
    char a=grade(Roll_no,mark);
    printf("Grade of student Roll_NO %d are %c", Roll_no, a);
}