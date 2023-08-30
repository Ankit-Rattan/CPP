#include<iostream>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }
    return n*fac(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    cout<<"Your Factorial is: "<<endl;
    cout<<fac(n)<<endl;

    return 0;
}