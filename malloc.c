#include<stdio.h>
#include<stdlib.h>
int main(){
    // int n;
    // int *ptr;
    
    // printf("enter number of element that you want to add\n");
    // scanf("%d",&n);

    // ptr=malloc(n*sizeof(int));

    // for(int i=0;i<n;i++){
    //     printf("enter mark of student : %d",i+1);
    //     scanf("%d",ptr+i);
    // }
    // for(int i=0;i<n;i++){
    //     printf("mark of student : %d\n",*(ptr+i));
    // }
    // free(ptr);


    //calloc
    // int n;
    // int *ptr;
    
    // printf("enter number of element that you want to add\n");
    // scanf("%d",&n);

    // ptr=calloc(n, sizeof(int));

    // for(int i=0;i<n;i++){
    //     printf("enter mark of student : %d ",i+1);
    //     scanf("%d",ptr+i);
    // }
    // for(int i=0;i<n;i++){
    //     printf("mark of student : %d\n",*(ptr+i));
    // }
    // free(ptr);


    //relloc 
    int n;
    int *ptr;
    
    printf("enter number of element that you want to add\n");
    scanf("%d",&n);

    ptr=(int*)calloc(n, sizeof(int));

    for(int i=0;i<n;i++){
        printf("enter mark of student : %d ",i+1);
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        printf("mark of student : %d\n",*(ptr+i));
    }
    //
    int newn;
    printf("enter number of element that you want to add\n");
    scanf("%d",&newn);
    ptr=(int*)realloc(ptr,(n+newn)*sizeof(int));

     for(int i=n;i<(n+newn);i++){
        printf("enter mark of student : %d ",i+1);
        scanf("%d",ptr+i);
    }
    for(int i=0;i<(n+newn);i++){
        printf("mark of student : %d\n",*(ptr+i));
    }
    return 0;
}