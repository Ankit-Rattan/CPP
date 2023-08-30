#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
    STL used for getting all permutations: next_permutation(nums.begin(), nums.end());
*/


int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<vector<int>> res;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    do{
        res.push_back(v);
    }while(next_permutation(v.begin(),v.end()));

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<v.size(); j++){
        cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}