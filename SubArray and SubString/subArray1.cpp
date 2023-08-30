#include<iostream>
using namespace std;

int main()
{
    // Printing Array in 2-D Array.

   int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int size = n*(n-1)/2;
    int res[size][n];

    for(int i=0; i<n; i++){
        int count =i+1;
        while(count<=n){
        for(int j = i; j<count; j++)
        {
            cout<<arr[j]<<" ";
            
        }
        count++;
        cout<<endl;
        }



    return 0;
}