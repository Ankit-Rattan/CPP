#include<iostream>
using namespace std;

int main()
{
    /*
        For matrixSearch  --> 2 Method   
                                -Linear Search (always applicable)
                                -Binary Search (when sorted in all direction);
    */

    int key;
    int r,c;
    cout<<"Enter the row value : ";cin>>r;
    cout<<"Enter the column value: ";cin>>c;
    int m[r][c];
    for(int i = 0 ; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>m[i][j];
        }
    }
    cout<<"matrix is->"<<endl;
    for(int i = 0 ; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<"Col: "<<sizeof(m[0])/sizeof(m[0][0])<<endl;
    cout<<endl;
    cout<<"Enter the key: ";
    cin>>key;
    
    int curr_c = c-1;
    int curr_r = 0;
    bool f = false;
    while(curr_r>=0 and curr_c<=c-1 and curr_c>=0 and curr_r<= r-1 ){
        if(m[curr_r][curr_c] == key){
            cout<<curr_r<<" "<<curr_c<<endl;
            f = true;
            break;
        }
        else if(m[curr_r][curr_c] >key){
            curr_c--;
        }
        else{
            curr_r++;
        }
    }
    if(f == false) cout<<"Not found"<<endl;





    return 0;
}