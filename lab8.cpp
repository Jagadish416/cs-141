#include<iostream>
using namespace std;
int main(){
//declaration of variables
float a;
float b;
float c;
float d;
float e;
float i;
//asking for values
cout<<"enter marks of each subject";
cin>>i;
cout<<"enter the marks of first subject";
cin>>a;
cout<<"enter the marks of second subject";
cin>>b;
cout<<"enter the marks of third subject ";
cin>>c;
cout<<"enter the marks of fourth subject";
cin>>d;
cout<<"enter the marks of fifth subject ";
cin>>e;
//calculation
float f=a+b+c+d+e;
float g=(a+b+c+d+e)/5;
float h=(f/(i*5))*100;
//showing the result
cout<<"total marks are "<<f<<" average marks are "<<g<<" percentage of marks are "<<h;
//returning an integer
return 0;
}  
