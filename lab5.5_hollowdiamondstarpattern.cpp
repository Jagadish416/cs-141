//hollow diamond star pattern
#include<iostream>
using namespace std;
int main(){
     int n;
     cout<< "enter the number of stars  = "<<endl;
     cin>> n;
      // print stars
//assign condition
 // print spaces
//assign condition
 // print stars
//assign condition
     for(int i = 0; i< n; i++)
     {
         for (int j= 0; j < (n-i);j++)
         {
          cout<< "*";
         }
         for (int j= 0; j < (2*i);j++)
         {
          cout<< " ";
         }
	for (int j= 0; j < (n-i);j++)
         {
          cout<< "*";
         }
       cout<<endl;
     }
     for(int i = 0; i< n; i++)
     {
         for (int j= 0; j < i+1;j++)
         {
          cout<< "*";
         }
         for (int j= 2*i; j < 2*n-2;j++)
         {
          cout<< " ";
         }
	for (int j= 0; j < i+1;j++)
         {
          cout<< "*";
         }
       cout<<endl;
     }
     return 0;
}

