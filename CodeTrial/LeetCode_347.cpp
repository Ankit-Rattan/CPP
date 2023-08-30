#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    void topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        int count = 1;
            if(nums.size() == 1) res.push_back(nums[0]);
                
        for(auto i=0; i<nums.size()-1; i++){
            count++;
            if(nums[i] != nums[i+1]){
                if(count>=k){
                    res.push_back(nums[i]);
                }
                count = 1;
            }
        }
        for(int i=0; i<res.size(); i++){
            cout<<res.at(i)<<" ";
        }       
    }
int main()
{
    int n;
    cout<<"ENter size: ";
    cin>>n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int key;
    cout<<"Enter key: ";
    cin>>key;
    topKFrequent(v, key);

    
    return 0;
}