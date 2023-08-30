#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// STL of binary search is used only to check the element in the list. It will reutrn in 0 and 1 depending on the elemtent presetn or not

int main()
{
    int n;
    cout<<"Enter the size : "<<endl;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    int key;
    cout<<"Enter the key to be searched :"<<endl;
    cin>>key;
    int bs= binary_search(v.begin(), v.end(), key);
    cout<<bs<<endl;
    
    return 0;
}