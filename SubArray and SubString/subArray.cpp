#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // Printing SubArray  as each elements and Sum of the each elements->   

    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // int size = n*(n+1)/2;
    // vector<int> temp;
    int sum= 0;
    
    cout<<endl;
    for(int i=0; i<n; i++){
        int count =i+1;
        while(count<=n){
        for(int j = i; j<count; j++)
        {
            cout<<arr[j]<<" ";
            sum+=arr[j];
            
        }
        count++;
        cout<<endl;
        }
        cout<<endl;
        cout<<sum;
        // for(int k=0; k<temp.size(); k++){
        //     cout<<temp[i]<<" ";
        // }
        
        
    }
    return 0;
}