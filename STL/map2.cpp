#include<iostream>
#include<map>
using namespace std;

// Counting occurence of elements in array using maps

int main()
{
    int arr[10] = {1,2,2,3,3,3,4,5,5,5};
    map<int,int>m;
    for(int i=0; i<10; i++){
        m[arr[i]]++;
    }
    for(auto x: m){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    
    return 0;
}