#include<iostream>
using namespace std;

void merge(int* arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e - mid;

    // Creating two new arr to merge them later in sorted order
    int* first = new int[len1];
    int* second = new int[len2];

    int mainIndex = s;
    for(auto i =0; i<len1; i++){
        first[i] = arr[mainIndex++];
    }
    for(auto i =0; i<len1; i++){
        second[i] = arr[mainIndex++];
    }
    
    // Merging it in the main array

    int ind1 = 0, ind2 = 0; 
    mainIndex = s;

    while(ind1<len1 && ind2 < len2){
        if(first[ind1] < second[ind2])
            arr[mainIndex++] = first[ind1++];

        else
            arr[mainIndex++] = second[ind2++];    
    }

    while(ind1<len1){
            arr[mainIndex++] = first[ind1++];
    }

    while(ind2 < len2){
            arr[mainIndex++] = second[ind2++];    
    }





}

void mergeSort(int* arr, int s, int e){
    if(s>=e )return;

    int mid = (s+e)/2;

    // Left Part
    mergeSort(arr, s ,mid);

    // Right Part
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}
int main()
{
    int n = 5;
    int arr[n] = {4, 200, 5, 6, 7};

    mergeSort(arr, 0, n-1);

    for(auto  i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}