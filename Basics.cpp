#include<iostream>
using namespace std;
int main()
{
     int x=100;
     int &z=x; //refernce variable 
     cout<<"z: "<<z<<endl;  
     int *p_x; // pointer use to store the value of address (address is in the form of hexadecimal)
     p_x=&x;
     cout<<*p_x<<endl; // pointer notation use to display the value of the address stored in the pointer 
     *p_x=200000;   // we change the value using pointer (indirectly we are changing value of x also)
     cout<<*p_x<<endl;
     cout<<x<<endl;

     int arr[10]={1,2,3,4,5,6,7,8,9,0}; 
     cout<<*arr<<endl;  // value at zero index(*arr-> value at that address)
     cout<<*arr+1<<endl;  // value at first index
}
