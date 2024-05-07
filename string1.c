int main(){
    char name[15];
    printf("Enter a Name: \n");
    scanf("%s",name);
    printf("%8s\n",name);
    for(int i=0;i<sizeof(name); i++){
        if(i%2==0){
            printf("%s ",name[i]);
        }
    }
}