// File: decl.h
// Author: Casey Bladow
// Date: 3-4-14
// Class: CSIS 252
// Program: payroll

// Description
// This file contains the declarations for the structs
//	employeeType - single employee
//			an array declared will store data for each employee
//	summaryType - summary for all employee data

#include <string>
using namespace std;

struct employeeType
{
    string name; //employee name
    int hours; // number of hours worked
    double wage; // wage the employee recieves
    double gross; // the gross amount for employee
    double fed; // the federal witchholding amount
    double ss; // social security amount
    double net; // the amount the employee recieves
};

struct summaryType
{
    double totalGross; // the total gross for all employees
    double federalWithholding; // the total federal amount withheld for emps
    double ssWithholding; // the total social security withheld
    double netPay; // the total net pay the employees recieved
};