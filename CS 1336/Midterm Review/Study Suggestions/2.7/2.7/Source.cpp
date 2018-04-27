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
   char letter;

   letter = -100;
   cout << static_cast<int>(letter) << '\a';
   letter = 'B';
   cout << letter << '\a';


   system("pause");														//pause before closing
   return 0;															//return 0 to end function
}
