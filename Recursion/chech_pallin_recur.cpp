#include<iostream>
using namespace std;

bool check(string s ,int st, int e){
    if(st>e) return true;

    if(s[st] != s[e])
        return false;

    check(s, st+1, e-1);    
}
int main()
{
    
    string s;
    cin>>s;
    int l = s.length()-1;
    bool ch = check(s, 0, l);
    if(ch) cout<<"Pallindrom"<<endl;
    else cout<<"No"<<endl;
    return 0;
}