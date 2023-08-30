#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
        vector<vector<int>> res;
        int n = 4; int k = 2;
        vector<int> v(n);
        for(auto i=0; i<n; i++){
            v[i] = i+1;
        }
    vector<vector<int>> v2;
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = i; j < v.size(); j++) {
            vector<int> subArray(v.begin() + i, v.begin() + j + 1);
            v2.push_back(subArray);
        }
    }  

    for(auto i = 0; i<v2.size(); i++ ){
        if(v2[i].size() == k){
            res.push_back(v2[i]);
        }
    }     

    for(auto i = 0; i<)


    
    return 0;
}