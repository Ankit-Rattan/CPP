#include<iostream>
using namespace std;

int main()
{
    // Spiral Order Matrix Traversal.

    int n,m;
    cout<<"Enter the value: ";
    cin>>n>>m;
    int a[n][m];
    for (int  i = 0; i <n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }

    // Printing array in matrix form
    for (int  i = 0; i <n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    // main code->

    int row_start = 0;
    int row_end = n-1;
    int coloumn_start = 0;
    int coloumn_end = m-1;

    while(row_start<=row_end && coloumn_start<=coloumn_end){
        //for row start: 

        for(int col = coloumn_start; col<=coloumn_end; col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        
        //for coloumn end: 

        for(int row = row_start; row<=row_end; row++){
            cout<<a[row][coloumn_end]<<" ";
        }
        coloumn_end++;

        //Now reverse from end (for row_end)->  

        for(int col = coloumn_end; col>coloumn_start; col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;

        //for coloumn start: 

        for(int row = row_end; row>=row_start; row--){
            cout<<a[row][coloumn_start]<<" ";
        }
        coloumn_start++;

        cout<<endl;
    }


    

    return 0;
}