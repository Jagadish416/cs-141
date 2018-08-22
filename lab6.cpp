#include<iostream>
using namespace std;
int main(){
//declaration of variables
float b;
float h;
//ask for value
cout<<"enter base of the triangle in meters ";
cin>>b;
cout<<"enter height of the triangle in meters ";
cin>>h;
//calculation
float area=0.5*b*h;
//showing the result
cout<<"the area is "<<area<<"square meters";
//returning an integer
return 0;
}
