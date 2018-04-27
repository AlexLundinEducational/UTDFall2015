// Author: Alex M Lundin
// Course: CS1336.008 // Date: 
// Assignment: Lecture Homework 
// Compiler: Visual C++ 2013
// Description: // 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   double interestRate, balance;

   cout << "Rate:" << endl;
   cin >> interestRate;
   balance = 0;

   if (interestRate > 0.07)
   {
      cout << "Bonus!" << endl;
      balance += 10;
      cout << balance << endl;
   }
   system("pause");														//pause before closing
   return 0;															//return 0 to end function
}
