#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    string s;
    cin>>s;
    long long int  curr = 0;
    long long int  res = 0;
    for(auto i=0; i<s.size(); i++){
        if(s[i] != ' '){
            curr++;
        }
        else{
            res = max(res, curr);
            curr=0;
        }
    }
    cout<<max(curr, res)<<endl;

    return 0;
}