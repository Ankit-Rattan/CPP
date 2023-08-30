#include<iostream>
#include<algorithm>
using namespace std;


int himanshu_max(int a, int b, int c, int d){
        int arr[4] = {a,b,c,d} ;
        sort(arr,arr+4);
        return arr[3];
        
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<himanshu_max(a,b,c,d);
    return 0;
}