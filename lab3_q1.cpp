#include<iostream>
using namespace std;
int main(){
int value;
int a,b;
float floatvar = 0.25;
double doublevar = 0.17;
bool boolvar = true;
char character = 'C';

cout << floatvar << endl;
cout << doublevar << endl;
cout << boolvar << endl;
cout << character << endl;

cout << "the size of  a = " << sizeof(a) <<endl;
cout << "the size of  floatvar = " << sizeof(floatvar) <<endl;
cout << "the size of boolvar = " << sizeof(boolvar) <<endl;
cout << "the size of doublevar = " << sizeof(doublevar) <<endl;
cout << "the size of character = " << sizeof(character) <<endl;
 
}


