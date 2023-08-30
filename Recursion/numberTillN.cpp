#include<iostream>
using namespace std;


void decr(int n){
    if(n ==1){
        cout<<"1 ";
        return;
    }
    cout<<n;
    decr(n-1);

}

void incr(int n){
    if(n ==1){
        cout<<"1";
        return;
    }
    incr(n-1);
    cout<<n;

}

int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    incr(n);
    cout<<endl;
    decr(n);
    return 0;
}