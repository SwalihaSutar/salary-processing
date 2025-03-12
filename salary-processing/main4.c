#include<stdio.h>

#define MAX 100
#define SIZE 3


struct Employee{
    int empID;
    char name[MAX];
    char designation[MAX];
    float basicSalary;
    float hoursWorked;
    float deductions;
    float netSalary;
    char salaryType[10];
};

struct Employee employees[SIZE];

void acceptAll(){

    for(int i=0; i < SIZE-1 ;i++){
    printf("Enter details of employee %d\n",i+1);
    printf("Enter empID:");
    scanf("%d",&employees[i].empID);
    printf("Enter name:");
    scanf("%s",employees[i].name);
    printf("Enter designation:");
    scanf("%s",employees[i].designation);
    printf("Enter basicSalary:");
    scanf("%f",&employees[i].basicSalary);
    printf("Enter hoursWorked:");
    scanf("%f",&employees[i].hoursWorked);
    printf("Enter deductions:");
    scanf("%f",&employees[i].deductions);
    printf("Enter netSalary:");
    scanf("%f",&employees[i].netSalary);
    printf("Enter salaryType:");
    scanf("%s",employees[i].salaryType);   
    }
}

void showAll(){
    printf("\n All Employee Details \n");

    for(int i=0; i < SIZE-1 ;i++){
    printf("empID: %d\n",employees[i].empID);
    printf("name: %s\n",employees[i].name);
    printf("designation: %s\n",employees[i].designation);
    printf("basicSalary: %.2f\n",employees[i].basicSalary);
    printf("hoursWorked: %.2f\n",employees[i].hoursWorked);
    printf("deductions: %.2f\n",employees[i].deductions);
    printf("netSalary: %.2f\n",employees[i].netSalary);
    printf("salaryType: %s\n",employees[i].salaryType);
    }
}


void show(int index){
    printf("\n Employee Details\n");
    printf("empID: %d\n",employees[index].empID);
    printf("name: %s\n",employees[index].name);
    printf("designation: %s\n",employees[index].designation);
    printf("basicSalary: %.2f\n",employees[index].basicSalary);
    printf("hoursWorked: %.2f\n",employees[index].hoursWorked);
    printf("deductions: %.2f\n",employees[index].deductions);
    printf("netSalary: %.2f\n",employees[index].netSalary);
    printf("salaryType: %s\n",employees[index].salaryType);

}
void update(int index){
    printf("\nEnter details of employee %d\n",index+1);
    printf("Enter empID:");
    scanf("%d",&employees[index].empID);
    printf("Enter name:");
    scanf("%s",employees[index].name);
    printf("Enter designation:");
    scanf("%s",employees[index].designation);
    printf("Enter basicSalary:");
    scanf("%f",&employees[index].basicSalary);
    printf("Enter hoursWorked:");
    scanf("%f",&employees[index].hoursWorked);
    printf("Enter deductions:");
    scanf("%f",&employees[index].deductions);
    printf("Enter netSalary:");
    scanf("%f",&employees[index].netSalary);
    printf("Enter salaryType:");
    scanf("%s",employees[index].salaryType);   
}


void delete(int index){
    printf("\n Delete Existing %d th Employee Details\n",index+1);
    employees[index].empID=0;
    employees[index].name[0]='\0';
    employees[index].designation[0]='\0';
    employees[index].basicSalary=0;
    employees[index].hoursWorked=0;
    employees[index].deductions=0;
    employees[index].netSalary=0;
    employees[index].salaryType[0]='\0';
}

int main(){

    int choice;
    while(1){
        printf("\nPayroll Management System\n");
        printf("===========================\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Calculate Salary\n");
        printf("4. Generate Payroll Report\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d",&choice);

    switch (choice){
        case 1: acceptAll(); break;
        case 2: showAll(); break;
        case 3: update(2); break;
        case 4: delete(1); break;
        case 5: return 0;
        default: printf("Invalid Choice. Try again.\n");
     }
    }
}