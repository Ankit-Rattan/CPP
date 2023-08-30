#include<iostream>
#include<string>
using namespace std;

string reversestr(string s){
    if(s.length() == 0){
        return " ";
    }
    char ch = s[0];
    string rest  =  reversestr(s.substr(1));
    if(ch == rest[0]){
        return rest;
    }
    return (ch+rest);

}

int main()

{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<reversestr(s)<<endl;

    return 0;
}