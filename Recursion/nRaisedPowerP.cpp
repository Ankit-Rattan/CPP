#include<iostream>
using namespace std;

int power(int n,int p){
    if( p ==0){
        return 1;
    }

    return n*power(n,p-1);
}

int main()
{
    int n;
    int p;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Enter the value of p: "<<endl;
    cin>>p;

    cout<<power(n,p);
    return 0;
}