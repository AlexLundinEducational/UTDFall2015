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
   int whole;
   double fractional;
   char letter;
   string name;


   cout << "Enter an int, double and a char" << endl;
   cin >> whole >> fractional >> letter;
   cout << "Enter first last" << endl;
   cin >> name;
   cout << "Enter first last" << endl;
   cin >> name;
   cout << whole << endl;
   cout << fractional << endl;
   cout << letter << endl;
   cout << name << endl;
   system("pause");														//pause before closing
   return 0;															//return 0 to end function
}
