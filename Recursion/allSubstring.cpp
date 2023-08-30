#include<iostream>
using namespace std;

void allSubstring(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return ;
    }
    char ch  = s[0];
    string ros = s.substr(1);
    allSubstring(ros,ans);
    allSubstring(ros, ans+ch);
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    string ans =" ";
    allSubstring(s,ans);
    return 0;
}