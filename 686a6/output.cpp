// File:    output.cpp
// Author:  Casey Bladow
// Date:    3-4-14
// Class:   CSIS 252
// Program: payroll

#include "decl.h"
#include <fstream>
#include <iomanip>
using namespace std;

// function: output
// description: This function will output all the results from the
//              program to the file "payroll"
// function input:  employees - employee data (array of structs)
//                  summary - test summary data (summaryType struct)
//                  count - number of employees (int)
// function output: none
// preconditions:   all input to the function has been calculated 
//                  and correct
// postconditions:  the file "payroll" was created and contains all
//                  the output from the program
void output(const employeeType employees[],summaryType summary,
            int count)
{
   ofstream f;         // the outputfile stream
   f.open("payroll");
   f << fixed << showpoint << setprecision(2); // format output
   f << endl;
   f << "Employee Summary Totals" << endl;
   f << "-----------------------" << endl;
   f << "Total Gross Pay: " << summary.totalGross << endl;
   f << "Total Federal Withholding: " << summary.federalWithholding << endl;
   f << "Total Social Security Withholding: " << summary.ssWithholding << endl;
   f << "Total Net Pay: " << summary.netPay << endl;
   f << "Name                   hrs     wage   gross     fed      SS     net\n";
   f << "------------------     -----  -----   -----   -----      --     ---\n";
   for (int i=0; i<count; i++)
   {
      f << setw(20) << left << employees[i].name;
      f << setw(5) << right << employees[i].hours;
      f << setw(10) << employees[i].wage;
      f << setw(8) << employees[i].gross;
      f << setw(8) << employees[i].fed;
      f << setw(8) << employees[i].ss;
      f << setw(8) << employees[i].net << endl;
   }
   f << endl;
   f.close();
}

