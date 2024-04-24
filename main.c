/*
Reg Number : 222013934
Names : NISINGIZWE NIYIGENA NICOLE
Date of Creation : April 24, 2024
Document name: main.c

Creates an array of 20 Employee records and assigns values to each record.
Prints the details of each employee record to the console using the printEmployee function.

*/


#include "employee.h"
#include <stdio.h>

int main() {
    // Creates an array of 20 Employee records and assigns values to each record.
    // Prints the details of each employee record to the console using the printEmployee function.
    struct Employee employees[20];
    for (int i = 0; i < 20; ++i) {
        employees[i].id = i + 1;
        sprintf(employees[i].name, "Employee%d", i + 1);
        employees[i].salary = 10000.0 + i * 1000;
        employees[i].age = 20 + i;
        employees[i].sex = (i % 2 == 0);
        printEmployee(&employees[i]);
    }

    return 0;
}
