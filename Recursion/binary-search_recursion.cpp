#include<iostream>
using namespace std;

bool bs(int arr[], int s, int e, int key ){
    if(s>e)
        return false;

    int mid = (s+e)/2;
    if(arr[mid] == key) return true;

    else if(arr[mid] > key) 
        bs(arr, s, mid-1, key);
    else 
        bs(arr, mid +1, e, key);        

}

int main()
{
    
    int arr[5];
    for (auto i = 0; i < 5; i++)
    {
        arr[i] = i+1;
    }

    // bs(arr, start, end, key)
    cout<<bs(arr, 0, 4, 7 );
    
    return 0;
}