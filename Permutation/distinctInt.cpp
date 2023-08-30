#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
TASK: 

    given an array of distinct integer, return all possible permuations of this array sets.

    e.g: [0,1]-> [0,1] and [1,0] => 2! => 2.

*/

//  Time Complexity: O(n!)  


vector<vector<int>> res;
void permute(vector<int> &v, int idx){
    if(idx == v.size()-1){
        res.push_back(v);
        return;
    }
    for(int i = idx; i<v.size(); i++){
        swap(v[i], v[idx]);
        permute(v,idx+1);
        swap(v[i], v[idx]);  // Resetting index.
    }
    return;

}

int main()
{
    int n;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<v.size(); i++)  // For-Each Loop.
    {
        cin>>v[i];
    } 
    permute(v,0);
    for(auto i=0; i<res.size(); i++){
        for(auto j=0; j<v.size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;

    }

    //    for(auto i : res){
    //     for(auto j : i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    // }

    
    return 0;
}
