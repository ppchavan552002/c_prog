#include<stdio.h>

struct Address
{
    int pin;
    char city[10];
};


struct Employee
{
   int empId;
   char empName[20];
   float empSalary;

   struct Address add;

};
int main(){
    struct Employee e1[2];
    for(int i=0;i<2;i++){
        printf("enter Emp Id : ");
    scanf("%d",&e1[i].empId);

    printf("enter Emp Name : ");
    scanf("%s",&e1[i].empName);

    printf("enter Emp Salary : ");
    scanf("%f",&e1[i].empSalary);

    printf("enter Emp pin : ");
    scanf("%d",&e1[i].add.pin);

    printf("enter Emp city : ");
    scanf("%s",&e1[i].add.city);
    }

    for(int i=0;i<2;i++){
        printf("Emp Id %d\n",e1[i].empId);
        printf("Emp Name %s\n",e1[i].empName);
        printf("Emp Salary %.2f\n",e1[i].empSalary);
        printf("Emp Id %d\n",e1[i].add.pin);
        printf("Emp Id %s\n",e1[i].add.city);
    }
    

    return 0;
}