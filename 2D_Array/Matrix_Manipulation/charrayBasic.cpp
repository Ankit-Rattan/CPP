#include<iostream>
using namespace std;

// for making a char array of n element ->  we need to assign size of n+1. Because last extra space is taken by null characters (This null character is made for the compiler to undertand that the string or the scentence is ended.)
int main()
{
    
    char arr[100];
    // cin>>arr;
    cin.getline(arr,100);   
    // cin.ignore();   //-> For cleaning buffer.

    cout<<arr; 


    return 0;
}