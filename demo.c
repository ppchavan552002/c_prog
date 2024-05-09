#include<stdio.h>

struct Employee
{
   int empId;
   char empName[20];
   float empSalary;

};
// int show(struct Employee);
int show(struct Employee *);
int main(){
    struct Employee e1={101,"ppc",2342.56};

    // show(e1);
    show(&e1);

    return 0;

}
//passing value
// int show(struct Employee e){
//     printf("Emp Id %d\n",e.empId);
//     printf("Emp Name %s\n",e.empName);
//     printf("Emp Salary %.2f\n",e.empSalary);
// }

//passing Address
int show(struct Employee *e){
    printf("Emp Id %d\n",e->empId);
    printf("Emp Name %s\n",e->empName);
    printf("Emp Salary %.2f\n",e->empSalary);
}