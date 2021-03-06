// File: evens.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function evens

// Function: evens
// Description: count the number of even integers and return it
// Input: numbers (array of int)
//	  count (int) - the number of values in the array
// Output: numOfEvens (int) - the number of even integers in the array
// Preconditions: the array must have at least 1 value
// Postcondtions: the number of evens is returned
//

int evens(const int numbers[], int count)
{
  int i;
  int numOfEvens = 0;
  int numOfOdds = 0;
  
  for (i = 0; i < count; i++)
    if (numbers[i] % 2 == 0)
      numOfEvens++;
    else
      numOfOdds++;
    return numOfEvens;
}