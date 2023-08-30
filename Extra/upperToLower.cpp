#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map< int, char> umap;
    int ini = 65;
    for(int i=1; i<=26; i++){
        umap[i] = ini;
        ini+=1;
    }
    // for(auto y:umap){
    //     cout<<y.first<<"->"<<y.second<<endl;
    // }
    // cout<<endl;

    map< int, char> umap1;
    int s =97;
    for(int i=1; i<=26; i++){
        umap1[i] = s;
        s+=1;
        
    }
    // for(auto x:umap1){
    //     cout<<x.first<<"->"<<x.second<<endl;
    // }

    string str ;
    cout<<"Enter the string"<<endl;
    cin>>str;
    for (int i = 1; i <=26; i++)
    {
        for(int j=1; j<=26 ;j++){

        if(umap[j] == str[i-1] )
        {
            str[i-1] = umap1[j];
        }
        }
    }
    cout<<str<<endl;

    return 0;
}