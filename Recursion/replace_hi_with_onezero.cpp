#include<iostream>
#include<string>
using namespace std;
void replacehi(string s){
    if(s.length() == 0){
        return ;
    }
    if(s[0] == 'h' and s[1] == 'e' and s[2] =='l' and s[3] == 'l' and s[4] == '0'){
        cout<<" 10101 ";
        replacehi(s.substr(5));
    }
    else{
        cout<<s[0];
        replacehi(s.substr(4));
    }
}
int main()
{
    string s;
    cin>>s;
    replacehi(s);
    return 0;
}