#include<iostream>
using namespace std;

int main()
{
    // Basics of 2D Array

    int r,c;
    cout<<"Enter the value of row and column: ";
    cin>>r>>c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        cout<<"for"<< i <<" "<<endl;
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for (int i = 0; i < r; i++)
    {
        cout<<" || ";
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    

    return 0;
}