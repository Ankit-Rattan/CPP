#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the matrix: ";
    cin>>n;
    int m[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0;j<n; j++){
            cin>>m[i][j];
        }
    }
    for(int i = 0; i<n; i++ ){
        for(int j = i; j<n; j++){
            int temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0;j<n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}