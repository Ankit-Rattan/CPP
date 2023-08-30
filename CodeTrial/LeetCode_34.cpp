#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Time Complexity : O(n)



    // vector<int> searchRange(vector<int>& nums, int target) {
    //     vector<int> res;
    //     bool f1 = 0; bool f2 = 0;
    //     int s=0; int e = nums.size()-1;
    //     while(s<nums.size()-1 || e>0){
    //         if(nums[s] == target) 
    //         {
    //             res.push_back(s);
    //             f1 = 1;
    //         }
    //         if(nums[e] == target)
    //         {
    //          res.push_back(e);
    //          f2 = 1;
    //         }
    //         if(f1 == 1 and f2 == 1)  break;
            

    //         s++; e--;
            
    //     }
    //     if(f1 == 0) res.push_back(-1);
    //     if(f2 == 0) res.push_back(-1);
        
    //     return res;
    // }

    vector<int> searchRange(vector<int>& nums, int target){
        vector<int> res = {-1,-1};
        int s1 = 0; int e1 = /*Start from here*/; int mid1 = (s1+e1)/2;
        int s2 = 0; int e2 = nums.size()-1; int mid2 = (s2+e2)/2;
        
        while(s<){
            if(mid == target){
                res
            }
        }
    }

int main()
{
    vector<int> res;
    int n; cout<<"Enter the value: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target; cout<<endl<<"Enter key : ";
    cin>>target;
    cout<<endl;
    res = searchRange(v,target);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    
    return 0;
}