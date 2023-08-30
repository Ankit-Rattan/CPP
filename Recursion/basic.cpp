#include<iostream>
using namespace std;


// When a function calls itself to make the problem smaller. There we use Recursive FUnction.

// Here is an simple example of adding numbers with recusrsion.

int sum(int n){
    if(n == 0){
        return 0;
    }
    
    return n+ sum(n-1);
 
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    
    return 0;
}