#include<iostream>
#include<algorithm>
using namespace std;
void solution(){
    int n;
    cin>>n;
    int gcdo= 0; int gcde = 0;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            gcde = __gcd(gcde, i);
        }
        else{
            gcdo= __gcd(gcdo, i);
        }
    }
    if(n%2 == 1) cout<<-1<<endl;
    else{
        for(int i=n; i>0; i--){
            cout<<i<<" ";
        }
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    
    return 0;
}