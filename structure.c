#include<stdio.h>

struct Employee
{
   int empId;
   char empName[20];
   float empSalary;

};


int main(){


    typedef int number;
    number a=10;
    printf("%d\n",a);

    // struct Employee e1=  {101,"Ram",1000.50};
    // printf("Emp Id %d\n",e1.empId);
    // printf("Emp Name %s\n",e1.empName);
    // printf("Emp Salary %.2f\n",e1.empSalary);

    // printf("\nseconnd emploees\n");
    // struct Employee e2=  {102,"sham",2000.50};
    // printf("Emp Id %d\n",e2.empId);
    // printf("Emp Name %s\n",e2.empName);
    // printf("Emp Salary %.2f\n",e2.empSalary);


    struct Employee e1;
    printf("enter Emp Id : ");
    scanf("%d",&e1.empId);

    printf("enter Emp Name : ");
    scanf("%s",&e1.empName);

    printf("enter Emp Salary : ");
    scanf("%f",&e1.empSalary);

    printf("Emp Id %d\n",e1.empId);
    printf("Emp Name %s\n",e1.empName);
    printf("Emp Salary %.2f\n",e1.empSalary);

    return 0;
}