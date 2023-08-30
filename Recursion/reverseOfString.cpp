#include<iostream>
using namespace std;

// Method -1

void reverse(string s){
    if(s.size() == 0){
        return ;
    }
    reverse(s.substr(1));
    cout<<s[0];
}

// Method-2

string revstr(string s){
    if(s.size()==0){
        return "";
    }

    return revstr(s.substr(1, s.size()-1)) + s[0];

}

int main()
{
    string s;
    cin>>s;
    reverse(s);
    cout<<endl;
    cout<<revstr(s);
    return 0;
}