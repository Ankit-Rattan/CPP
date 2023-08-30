#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--){
        cout<<"Enter"<<endl;
	 long long l, r;
	 cin>>l>>r;
	long long x = 0;
	for(auto b = l+1; l<=r; b++ ){
	    for(auto a = l; a<=b; a++ ){
	        if(a^b == a+b){
	            x++;
	        }
	    }
	}
	cout<<x<<endl;
}
	return 0;
}