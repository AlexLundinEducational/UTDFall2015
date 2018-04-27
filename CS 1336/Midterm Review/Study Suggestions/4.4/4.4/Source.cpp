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
   int x, y;
   cout << "y:" << endl;
   cin >> y;


   if (y % 2 == 0)
      x = 5;
   else
      x = 0;
   cout << x;
   system("pause");														//pause before closing
   return 0;															//return 0 to end function
}
