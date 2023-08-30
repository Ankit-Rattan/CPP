#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string revstr(string s){
    if(s.size()==0){
        return " ";
    }

    return revstr(s.substr(1, s.size()-1)) + s[1];

}

int main()
{
    string str;
    cin>>str;
    cout<<revstr(str);

    return 0;
}