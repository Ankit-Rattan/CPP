#include<iostream>
using namespace std;
// Bubble sort using Recursion

void sortBubble(int* arr, int n){
    if(n == 0 || n == 1)
        return ;

    for(auto i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }
    sortBubble(arr, n-1);   
}


int main()
{
    int arr[5];
    for(auto i = 0; i<5 ;i++){
        cin>>arr[i];
    }

    sortBubble(arr, 5);

    for(auto i = 0; i<5 ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}