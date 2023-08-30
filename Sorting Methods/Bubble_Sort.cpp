#include<iostream>
using namespace std;

// In Bubble Sort, we repeatedly swap two adjacent elements if they are in wrong order.
// if we have n elements in an array, then we will do n-1 iterations.

/* Also,
    -> 1st Iteration: n-1 swap check
    -> 2nd Iteration : n-2 swap check.
    .
    .
    .
    -> 'i'th iteration: n-i swap check.

*/
void bubSort(int arr[], int n){

    int count = 1;
    while(count<n-1){
        for (int i = 0; i < n-count; i++)
        {
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        // After the completion each such loops, the largest element will reach at the end.
        count++;
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
    bubSort(arr, n);
    
    return 0;
}