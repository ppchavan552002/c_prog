#include <stdio.h>
#include <string.h>

char* strcpy_1( char s[], const char n[]){
     int i = 0;
     while(n[i] != '\0'){
         s[i] = n[i];
         i++;
     }
     s[i] = '\0';
     return s;
}

int main() {
    char name1[] = "Amit";
    char source[10];
    strcpy_1(source, name1);
    printf("%s\n", source);
}