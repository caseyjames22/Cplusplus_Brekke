//Casey Bladow
//main1.cpp 
//1-22-13
//
//Inputs two ints and reports the results of the 5 arithmetic operators.
//Use the first input int as the first value in the calculation. Output
//two valuse for division, the result of ineger division and the result
//of floating point division. Therefore, there will be 6 results reported.

#include <iostream>
using namespace std;

int main()
{
  int input1;  
  int input2;
  
  cout << "Enter the 1st integer: ";
  cin >> input1;

  cout << "Enter the 2nd integer: ";
  cin >> input2;  

  cout << "Addition: " << input1 << " + " << input2 << " = " << input1 + input2 << endl;
  cout << "Subtraction: " << input1 << " - " << input2 << " = " << input1 - input2 << endl;
  cout << "Multiplication: " << input1 << " * " << input2 << " = " << input1 * input2 << endl;
  cout << "Modulo: " << input1 << " % " << input2 << " = " << input1 % input2 << endl;
  cout << "Integer Division: " << input1 << " / " << input2 << " = " << input1 / input2 << endl;
  cout << "Floating Point Division: " << input1 << " / " << input2 << " = " << static_cast<double>(input1) / input2 << endl;
 
  return 0;
}