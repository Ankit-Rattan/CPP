#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    string s = "hello";
    map<char, int> m;
    for(int i=0; i<s.length(); i++){
        m[s[i]]++;
    }

    for(auto x : m){
        cout<<x.first << " -> "<<x.second<<endl;
    }

    vector<char, int> v;
    for(int i=0; i<s.length(); i++){
        
    }
    return 0;
}