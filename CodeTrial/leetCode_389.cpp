#include<iostream>
using namespace std;

int main()
{
    string s,t;
    int i,j;
    char res='0';
    s= "abcd";
    t = "bcdae";
    bool f = 0;
    for(i=0; i<=t.length(); i++){
         f = 0;
        for (j = 0; j <= s.length(); j++)
        {
            if((int)t[i] == (int)s[j]){
                f = 1;
                break;
            }
        }
        cout<<(int)t[j]<<" "<<s[i]<<endl;

        
        if(f==0){
            res = t[i];
            break;
        }
    }
    cout<<res<<endl;
    
    return 0;
}