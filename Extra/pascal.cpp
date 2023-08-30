#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0; i<n; i++){
        v[i].resize(i+1);
        v[i][0] = v[i][i] =1;
        for(int j= 1; j<n; j++){
            v[i][j] = v[i-1][j-1] + v[i-1][j];
        }
    }

    cout<<"Vector representing Pascal Triangle: "<<endl;
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}