// Author: Alex M Lundin
// Course: CS1336.008 // Date: 
// Assignment: Lecture Homework 
// Compiler: Visual C++ 2013
// Description: // 

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   short int sInt = 32767;
   cout << endl << "Value of sInt before add : " << sInt << endl ;
      sInt = sInt + 1;
   cout << endl << "Value of sInt after add : " << sInt << endl;
   system("pause");														//pause before closing
   return 0;															//return 0 to end function
}
