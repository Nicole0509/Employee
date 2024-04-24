/*
Reg Number : 222013934
Names : NISINGIZWE NIYIGENA NICOLE
Date of Creation : April 24, 2024
Document name: employee.c

This piece of code prints the details of a single employee, 
including ID, name, salary, age, and sex by using a function
*/


#include "employee.h"
#include <stdio.h>

void printEmployee(const struct Employee *employee) {
    
    printf("%d %s %.2f %d %d\n", employee->id, employee->name,
           employee->salary, employee->age, employee->sex);
}
