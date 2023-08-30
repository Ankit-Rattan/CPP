#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string t = "hello";
    char s[5] = "dbca";
    sort(s,s+4);
    cout<<s<<endl;
    cout<<t.length()<<endl;
    return 0;
}