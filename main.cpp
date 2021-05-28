#include <iostream>
using namespace std;

int main() 
{
  cout << "Naimenshee i naibolshee chislo" << endl;
  cout << "Vvedite chislo ne bolee 99: ";
  int number = 0;
  cin >> number;
  int firstNumber = 0;
  int twentyNumber = 0;
  firstNumber = number / 10;
  twentyNumber = number % 10;
  if (firstNumber < twentyNumber) 
  {
    cout << "max = " << twentyNumber << endl << "min = " << firstNumber << endl;
  }
  else if (firstNumber > twentyNumber) 
  {
    cout << "max = " << firstNumber << endl << "min = " << twentyNumber << endl;
  }
  else if (firstNumber == twentyNumber)
  {
    cout << "Chisla ravni" << endl;
  }
}