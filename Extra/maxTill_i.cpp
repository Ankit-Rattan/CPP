#include<iostream>
using namespace std;

int main()
{
    int mini = 0;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        mini = max(mini, arr[i]);
        cout<<mini<<endl;
    }
    

    return 0;
}