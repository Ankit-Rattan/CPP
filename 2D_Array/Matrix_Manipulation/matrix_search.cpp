#include<iostream>
using namespace std;



int main()
{
    int r,c;
    cout<<"Enter Row: ";
    cin>>r;
    cout<<"Enter Col: ";
    cin>>c;
    int arr[r][c];
    int k;
    

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the key:";
    cin>>k;
    
    //-> Brute-Force. (Time Complexity: O(rc))

    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         if(arr[i][j]==k){
    //             cout<<i<<" "<<j<<endl;
    //         }
    //     }
    // }
    
    // Method 2: (For this matrix should be sorted in each direction) (Sort of Binary Search)

    
    int i = 0; int j=c-1;
    while(i<r and j>=0){
        if(arr[i][j] == k){
            cout<<i<<" "<<j;
            break;
        }
        if(arr[i][j]>k){
            j--;
        }
        else{
            i++;
        }

    }



    return 0;
}