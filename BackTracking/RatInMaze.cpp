#include<iostream>
using namespace std;
// Checking for the black is '0' or '1' and in range
bool isSafe(int** arr, int x, int y, int n ){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratinMaze(int** arr, int x, int y, int n, int** solArr){
   
//    Base Condtion
    if(x == n-1 && y == n-1 ){
        solArr[x][y] =1;
        return true;
    }    

    if(isSafe(arr,x,y,n)){
    // Agar vo block open hain to abhi ke liye humne uss block ko '1' kr diya, vaha se furthur ja sakat hain ki nahi vo baad me dekhte hain.
        
        solArr[x][y] = 1;

    // Now we check for further movement of the rat inside:
        if(ratinMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratinMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y] = 0; // Backtracking.
        return false;  // This false function will tend the function to tend again.
    }
    return false;   // This return false also will tend the function to run again.

}

int main()
{
    int n;
    cout<<"Enter the size of the matrix: ";
    cin>>n;

    // Dynamic initializtion of array -->
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }
    
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cin>>arr[i][j];
        }
    }


    int** solArr = new int*[n];
    for(int i=0; i<n; i++){
        solArr[i] = new int[n];
    }
    
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            solArr[i][j] =0;
        }
    }
    if(ratinMaze(arr,0,0,n,solArr)){
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<solArr[i][j]<<" ";
        }
        cout<<endl;
    }

    }



    return 0;
}
