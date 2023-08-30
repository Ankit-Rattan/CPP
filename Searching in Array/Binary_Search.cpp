#include<iostream>
using namespace std;

// Time Complexity: O(log(n))

int BinSearch(int arr[], int n, int key){
    int s = 0; int e = n-1;
    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid]== key){
            return mid;
        }
        else if(arr[mid]>key){
            s+=mid;
        }
        else{
            e-=mid;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int key;
    cout<<"Enter the value of the key: ";
    cin>>key;
    cout<<BinSearch(arr, n,key);
    
    
    return 0;
}