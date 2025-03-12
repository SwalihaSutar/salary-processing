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


int main(){
    acceptAll();
    showAll();
    
    int index;
    printf("Enter index to show details: ");
    scanf("%d",&index);

    show(index);
    update(index);
    showAll();
    return 0;
}