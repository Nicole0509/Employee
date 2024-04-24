/*
Reg Number : 222013934
Names : NISINGIZWE NIYIGENA NICOLE
Date of Creation : April 24, 2024
Document name: employee.h 

This piece of code defines the structure Employee, which 
represents an employee with fields for ID, name, salary, age, and sex.

*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdbool.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    int age;
    bool sex;
};

#endif /* EMPLOYEE_H */
