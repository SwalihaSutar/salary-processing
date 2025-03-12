#include<stdio.h>

struct Employee{
    int empID;
    char name[100];
    char designation[100];
    float basicSalary;
    float hoursWorked;
    float deductions;
    float netSalary;
    char salaryType[10];
};
int main(){
    struct Employee e1;
    printf("Enter empID:");
    scanf("%d",&e1.empID);
    printf("Enter name:");
    scanf("%s",e1.name);
    printf("Enter designation:");
    scanf("%s",e1.designation);
    printf("Enter basicSalary:");
    scanf("%f",&e1.basicSalary);
    printf("Enter hoursWorked:");
    scanf("%f",&e1.hoursWorked);
    printf("Enter deductions:");
    scanf("%f",&e1.deductions);
    printf("Enter netSalary:");
    scanf("%f",&e1.netSalary);
    printf("Enter salaryType:");
    scanf("%s",e1.salaryType);   

    printf("empID: %d\n",e1.empID);
    printf("name: %s\n",e1.name);
    printf("designation: %s\n",e1.designation);
    printf("basicSalary: %f\n",e1.basicSalary);
    printf("hoursWorked: %f\n",e1.hoursWorked);
    printf("deductions: %f\n",e1.deductions);
    printf("netSalary: %f\n",e1.netSalary);
    printf("salaryType: %s\n",e1.salaryType);

    return 0;
}