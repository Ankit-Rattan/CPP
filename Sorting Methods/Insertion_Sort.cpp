#include<iostream>
using namespace std;

// In Insertion Sort -> Insert an elements from unsorted array to its required position to form a sorted array.
// In this we start from second positon. 

void insSort(int arr[], int n){

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current and j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insSort(arr, n);
    
    return 0;
}