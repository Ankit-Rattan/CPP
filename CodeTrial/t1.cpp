#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
        vector<string> res;
        vector<int> v;
        vector<int> score;
        int n;
        cout<<"ENter size:"<<endl;
        cin>>n;
        for(int i=0; i<n; i++){
            int ele;
            cin>>ele;
            score.push_back(ele);
        }
        
        for(int i=0; i<score.size(); i++){
            v[i] = score[i];
        }
        int temp = 4;
        // int s = v.size();
        sort(v.begin(), v.end());
        for(int i = v.size()-1; i>0; i--){
            for(int j = 0; j<v.size(); j++){
                if(v[i] == score[j]){
                    if(i == v.size()-1) res[j] = "Gold Medal";
                    else if(i == v.size()-1-1) res[j] = "Silver Medal";
                    else if(i == v.size()-1-2) res[j] = "Bronze Medal";
                    else{
                        res[j] = (char)temp;
                        temp++;
                    } 
                }
            }
        }
        cout<<"Here iis ansewr"<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}