/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Write a C++ program to find maximum between two numbers. 
#include<iostream>
using namespace std;
int main(){
// declaration of variables 
// assigning values to it
// using if and else  for the conditionals
  int a,b;

  cout << "first number = " <<endl;
  cin >> a; 
  cout << "second number = " <<endl;
  cin >> b;
       if (b > a){
   cout << " second number is greater than first one" << endl;
   }
       else { 
  cout << " first one is greater than the second one" << endl;
  }
  return 0;
}