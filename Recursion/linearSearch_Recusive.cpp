#include<iostream>
using namespace std;

bool got(int arr[], int n, int key){
    if(n == 0)
        return false;

    if(arr[0] == key) return true;

    got(arr +1, n-1, key);

}

int main()
{
    
    int arr[5];
    for (auto i = 0; i < 5; i++)
    {
        arr[i] = i+1;
    }

    cout<<got(arr, 5, 6);
    
    return 0;
}