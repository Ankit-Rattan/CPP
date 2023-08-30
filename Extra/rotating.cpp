#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Before Rotating"<<endl; 
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int temp = v[n-1];
    for(int i=n-1; i>0; i--){
        v[i] = v[i-1];
    }
    v[0] = temp;

    cout<<"After Rotation: "<<endl;
    for(int i =0; i<n ; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}