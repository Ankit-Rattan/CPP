#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter the row: ";
    cin>>r;
    cout<<"Enter the coloumn: ";
    cin>>c;
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>a[r][c];
        }
    }
    int rs = 0;
    int re = r-1;
    int cs = 0;
    int ce = c-1;
    while(rs<=re && cs<=ce){
        for(int i = cs; i<=ce; i++){
            cout<<a[rs][i];
        }
        rs++;

        for(int j = rs; j<=re; j++){
            cout<<a[j][ce];
        }
        ce--;

        for(int k = ce; k>=cs; k--){
            cout<<a[re][k];
        }
        re--;

        for(int l = re; l>=rs; l--)
            cout<<a[l][ce];
        }
        cs++;
    }

    return 0;
}