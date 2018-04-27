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


   double number = 34.789;

   cout << setprecision(3) << number << endl;
   cout << setprecision(4) << number << endl;
   cout << setprecision(5) << number << endl;
   cout << setprecision(6) << number << endl;
   cout << setprecision(7) << number << endl;
   cout << "this is fixed" << fixed << endl;
   cout << setprecision(3) << number << endl;
   cout << setprecision(4) << number << endl;
   cout << setprecision(5) << number << endl;
   cout << setprecision(6) << number << endl;
   cout << setprecision(7) << number << endl;
   cout << "this is showpoint" << showpoint << endl;
   cout << setprecision(1) << number << endl;
   cout << setprecision(2) << number << endl;
   cout << setprecision(3) << number << endl;
   cout << setprecision(4) << number << endl;
   cout << setprecision(5) << number << endl;
   cout << "this is both" << showpoint << fixed << endl;
   cout << setprecision(1) << number << endl;
   cout << setprecision(2) << number << endl;
   cout << setprecision(3) << number << endl;
   cout << setprecision(4) << number << endl;
   cout << setprecision(5) << number << endl;

   cout << "this is fixed with setw" << fixed << endl;
   cout << setprecision(2) << setw(9) << number << endl;
   cout << setprecision(2) << setw(9) << left << number << endl;
   cout << setprecision(2) << setw(9) << right << number << endl;
   cout << "setw default" << endl;
   cout << setprecision(2) << setw(9) << number << endl;
   cout << "showing setprecision is persistent \n setw not persistent" << endl;
   cout << "No buffer" << number << "on either side" << endl;

   system("pause");														//pause before closing
   return 0;															//return 0 to end function
}
