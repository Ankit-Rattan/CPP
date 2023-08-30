#include<iostream>
using namespace std;

int main()
{
    int n; int k;
    cin>>n;
    for (int  i = 1; i <= n; i++,k=0)
    {
        for (int j = 1; i <=n-i; j++)
        {
            cout<<" ";
        }
        while (k!=2*i-1)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    

    return 0;
}