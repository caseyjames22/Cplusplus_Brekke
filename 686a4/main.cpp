//Casey Bladow
//main.cpp --> prog3
//2-11-13
//
//Array processing...

#include <iostream>
#include <iomanip>
using namespace std;

const int arraysize = 10;
const int sentinel = 0;

void read(int numbers[], int& count)
{
  int num;
  count = 0;
  //user enters integers
  cout << "Enter ints, " << sentinel << " to quit: ";
  cin >> num;
  
  //checks to see if the first user entered integer is
  //negative or not. If it is, an error is thrown and
  //user is asked to enter a new integer
  if (num < 0)
  {
    cout << "ERROR - Integer CAN NOT be a negative value." << endl;
    cout << "Enter ints, " << sentinel << " to quit: ";
    cin >> num;
  }
  
  //initializes the while loop checking to make sure the user
  //integer isn't the sentinel value and making sure the count
  //is within the allowed arraysize size.
  while (num != sentinel /*&& count < arraysize*/)
  {
    
    //checks each user entered integer to make sure they are not
    //negative. If it is, an error is thrown and
    //user is asked to enter a new integer
    if (num < 0)
    {
      cout << "ERROR - Integer CAN NOT be a negative value." << endl;
      cout << "Enter ints, " << sentinel << " to quit: ";
      cin >> num;
    }
    
    else if (count > arraysize-1)
    {
      cout << "You have exceeded the max array size." << endl;
      cout << "The values you enter from now on WILL NOT be entered into the array." << endl;
      cout << "Please enter " << sentinel << " to exit." << endl;
      cin >> num;
    }
    //else the user entered integer is added to the array
    //and count gets 1 added.
    else
    {
    numbers[count++] = num;
    cin >> num;
    }
  }
}

void output(const int numbers[], int count)
{
  int i;
  for (i = 0; i < count; i++)
    cout << numbers[i] << ' ';
  cout << endl;
}

int findsum(const int numbers[], int count)
{
  int sum = 0;
  int i;
  for (i = 0; i < count; i++)
    sum += numbers[i];
  return sum;
}

double findaverage(const int numbers[], int count)
{
  double average;
  cout << fixed << setprecision(2);
  average = static_cast<double>(findsum(numbers, count)) / count;
  return average;
}

int lessThanAvg(const int numbers[], int count, double average)
{
  int i;
  int temp = 0;
  int lessThanAverage = 0;
  average = findaverage(numbers, count);
  
  cout << fixed << setprecision(0);
  for (i = 0; i < count; i++)
    if (numbers[i] < average)
      lessThanAverage++;
    else
      temp++;
    return lessThanAverage;
}

int greaterThanAvg(const int numbers[], int count, double average)
{
  int i;
  int greaterThanAverage = 0;
  int temp = 0;
  average = findaverage(numbers, count);
  
  cout << fixed << setprecision(0);
  for (i = 0; i < count; i++)
    if (numbers[i] > average && numbers[i] != average)
      greaterThanAverage++;
    else
      temp++;
    return greaterThanAverage;
}

void findSmallest(const int numbers[], int count, int& smallest, int& index)
{
  int i;
  smallest = numbers[0];
  
  for (i = 0; i < count; i++)
    if (numbers[i] < smallest)
    {
      smallest = numbers[i];
      index = i;
    }
  cout << "Smallest integer was " << smallest << ". Indexed in numbers[" << index << "]." << endl;
}

void findLargest(const int numbers[], int count, int& biggest, int& index)
{
  int i;
  biggest = numbers[0];
  
  for (i = 0; i < count; i++)
    if (numbers[i] > biggest)
    {
      biggest = numbers[i];
      index = i;
    }
  cout << "Largest integer was " << biggest << ". Indexed in numbers[" << index << "]." << endl;
}

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

void search(const int numbers[], int count, int searchvalue, int& smallestindex, int& largestindex, int& matches)
{
  int searchInt = 0;
  int i;
  
  cout << "Enter an integer to search for in the array: ";
  cin >> searchInt;
 
  int flag = 0;
  int flag2 = 0;
  
  //iterates through numbers and checks to see if value is in
  //array.
  for (i = 0; i < count; i++)
    if (numbers[i] == searchInt)
    {
      flag = 1;
      break;
    }
    
  if (flag)
  {
    cout << "The smallest index for the integer you searched for is in numbers[" << i << "]." << endl;
    
    
    //find the last index value for searched int.
    for (i = 9; i >= 0; i--)
      if (numbers[i] == searchInt)
      {
	flag2 = 1;
	break;
      }
    if (flag2)
    {
    cout << "The largest index for the integer you searched for is in numbers[" << i << "]." << endl;
    }
    
    //itterates through and counts how many times the search value appears
    for (i = 0; i < count; i++)
    if (numbers[i] == searchInt)
    {
      matches++;
    }
    
    cout << "The integer " << searchInt << " appears " << matches << " times." << endl;
  }
  else
  {
    cout << "The integer you searched for is not in the array." << endl;
  }
}

void sort(int numbers[], int n)
{
   int temp;
   int small;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      small=i;
      for (int j=i+1; j<n; j++)  // loop to find the smallest
         if (numbers[j] < numbers[small])
            small=j;
      temp = numbers[i];
      numbers[i] = numbers[small];
      numbers[small] = temp;
   }
}

int main()
{
  int numbers[arraysize];
  int count;
  double average;
  int smallest;
  int biggest;
  int index;
  int searchvalue = 0;
  int smallestindex = 0;
  int largestindex = 0;
  int matches = 0;
  
  read(numbers, count);
  cout << "Entered Array: ";
  output(numbers, count);
  cout << "Average is: " << findaverage(numbers, count) << endl;
  cout << "Number of ints that are less than average: " << lessThanAvg(numbers, count, average) << endl;
  cout << "Number of ints that are greater than average: " << greaterThanAvg(numbers, count, average) << endl;
  findSmallest(numbers, count, smallest, index);
  findLargest(numbers, count, biggest, index);
  cout << "Number of Even Integers: " << evens(numbers, count) << endl;
  cout << "Number of Odd Integers: " << odds(numbers, count) << endl;
  cout << "Sorted Array: "; 
  sort(numbers, count);
  output(numbers, count);
  search(numbers, count, searchvalue, smallestindex, largestindex, matches);
return 0;
}
