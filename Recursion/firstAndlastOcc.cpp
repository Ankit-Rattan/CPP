#include<iostream>
using namespace std;

// In both the cases we introduced 'i' for maintaining the position to return

// For calculating first occurence of a number!
int firstocc(int arr[], int n, int key, int i){
    if(i == n){
        return -1;
    }

    if(key == arr[i]){
        return i;
    }
    return firstocc(arr, n, key, i+1);
    
}


int lastocc(int arr[], int n, int key, int  i){
    int restArray = lastocc(arr, n, key, i+1);
    if(i ==n){
        return -1;
    }
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;

}

int main()
{
    int n; 
    cout<<"Enter the size of the array: ";
    cin>>n;
  
    int arr[n];
    cout<<"Enter the array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value of key: ";
    cin>>key;
    cout<<endl<<"FIrst occurence is: "<<endl;    
    cout<<firstocc(arr, n, key, 0)<<endl;
    cout<<endl<<"Last occurence is: "<<endl;    
    
    cout<<lastocc(arr, n ,key, 0)<<endl;

    return 0;
}