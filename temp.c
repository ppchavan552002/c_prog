#include<stdio.h>

struct Address
{
    int pin;
    char city[10];
};

typedef struct{
    int date;
    int month;
    int year;
}MyDate;

struct Employee
{
   int empId;
   char empName[20];
   float empSalary;

   struct Address add;
   MyDate joinDate;

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

    printf("enter Emp date : ");
    scanf("%d",&e1[i].joinDate.date);

    printf("enter Emp month : ");
    scanf("%d",&e1[i].joinDate.month);

    printf("enter Emp year : ");
    scanf("%d",&e1[i].joinDate.year);
    }

    for(int i=0;i<2;i++){
        printf("Emp Id %d\n",e1[i].empId);
        printf("Emp Name %s\n",e1[i].empName);
        printf("Emp Salary %.2f\n",e1[i].empSalary);
        printf("Emp Id %d\n",e1[i].add.pin);
        printf("Emp city %s\n",e1[i].add.city);
        printf("Emp join date : %d/%d/%d\n",e1[i].joinDate.date,e1[i].joinDate.month,e1[i].joinDate.year);
    }
    

    return 0;
}