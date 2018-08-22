#include<iostream>
using namespace std;
int main(){
//declaration of variables
int l;
//ask for value
cout<<"Enter length in cm";
cin>>l;
//calculation
float lmeter=l/100.0;
float lkilometer=l/1000.0;
//result
cout<<"the length in meters is"<<lmeter<<"meters";
cout<<"the length in kilometers is"<<lkilometer<<"kilometers";
// returning an integer
return 0;
}
 
