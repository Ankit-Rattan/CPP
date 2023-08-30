#include<iostream>
using namespace std;

// Time Complexity: O(n)

int LinSearch(int arr[], int n, int key){
    for (int i = 0; i<n; i++)
    {
        if(arr[i] ==key){
            return i;
        }

    }
    return -1;
    
}
int main()
{
    int n;
    cout<<"Enter the Lenght of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int key;
    cout<<"Enter the key to be entered: ";
    cin>>key;
    cout<<LinSearch(arr, n, key);
    
    
    return 0;
}