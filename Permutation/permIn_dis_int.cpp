#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
    TASK: 
        given array with duplicate elements, and return all permuations 
*/
int main()
{
    vector<vector<int>> res;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());


    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v.at(i)<<" ";
    // } 


    do{
        res.push_back(v);
    }while(next_permutation(v.begin(), v.end()));

    for(int i=0; i<res.size(); i++){
        for(int j=0; j<v.size(); j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}