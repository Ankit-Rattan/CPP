#include<iostream>
using namespace std;
void convert(string s, int n, string &ans){
    if(n < 0) return;

    ans+=s[n];
    convert (s, n-1, ans);

}
int main()
{
    string s ;
    cin>>s;
    string ans = "";
    convert(s,s.size() ,ans);
    cout<<ans<<endl;

    return 0;
}