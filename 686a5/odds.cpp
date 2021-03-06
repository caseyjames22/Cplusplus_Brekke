// File: odds.cpp
// Author: Casey Bladow
// Program: Asmt5
// Date: 2-24-14

//Description: This file contains the function odds

// Function: odds
// Description: count the number of odd integers and return it
// Input: numbers (array of int)
//	  count (int) - the number of values in the array
// Output: numOfOdds (int) - the number of odd integers in the array
// Preconditions: the array must have at least 1 value
// Postcondtions: the number of odds is returned
//

int odds(const int numbers[], int count)
{
  int i;
  int numOfEvens = 0;
  int numOfOdds = 0;
  
  for (i = 0; i < count; i++)
    if (numbers[i] % 2 == 0)
      numOfEvens++;
    else
      numOfOdds++;
    return numOfOdds;
}