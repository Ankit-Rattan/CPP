#include<iostream>
using namespace std;

string moveX(string s){
    if(s.length() == 0){
        return "";
    }

    char ch = s[0];
    string res = moveX(s.substr(1));
    if(ch == 'x'){
        return res + ch;
    }
    else{
        return ch + res;
    }
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<moveX(s);
    
    return 0;
}