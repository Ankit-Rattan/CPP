#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter row: ";
    cin>>r;
    cout<<"Enter Coloumn: ";
    cin>>c;
    int arr[r][c];
    for (int i = 0; i <r; i++)
    {
        cout<<"Enter for row "<<i+1<<endl;
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }        
        
    }
    cout<<endl;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }        
        cout<<endl;
    }
    for(int i=0; i<r; i++){
        for(int j=i; j<c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<endl;

    cout<<"After Transpose"<<endl;
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }        
        cout<<endl;
    }    
    
    return 0;
}