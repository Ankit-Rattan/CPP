#include<iostream>
using namespace std;

int main()
{
    int n1, n2,n3;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    cout<<"Enter n3: ";
    cin>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            cin>>m1[i][j];
        }
    }
    for(int i = 0; i<n2; i++){
        for(int j = 0; j<n3; j++){
            cin>>m2[i][j];
        }
    }
    cout<<"Two Matrix are: "<<endl;
    cout<<"Matrix: 1"<<endl;
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matrix: 2"<<endl;
    for(int i = 0; i<n2; i++){
        for(int j = 0; j<n3; j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    int res[n1][n3];
    for(int i =0; i<n1; i++){
        for(int j = 0;j<n3; j++){
            res[i][j] = 0;
        }
    }
    for(int i = 0; i<n1; i++){
        for(int j= 0;j<n3; j++){
            for(int k=0; k<n2; k++){
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    cout<<"The mult reslut is: "<<endl;
    for(int i =0; i<n1; i++){
        for(int j = 0;j<n3; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}