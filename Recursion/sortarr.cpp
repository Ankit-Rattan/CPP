#include<iostream>
using namespace std;

// Checking array is sorted or not.

bool check(int arr[], int n){
    if(n==1){
        return true;
    }
    return (arr[1]>arr[0] && check(arr+1, n-1));
}

int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    cout<<check(arr, n);
    return 0;
}