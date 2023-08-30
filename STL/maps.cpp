#include<iostream>
#include<map>
using namespace std;
// Maps in cpp is like tuple in python
// All operation are done in O(log(n)) time;
// Based on Red Black trees.
int main()
{
    map<int,int> map1;  // declaring map
    map1[1] = 10;
    map1[2] = 20;
    map1[3] = 30;
    map1[4] = 40;

    // Here also for printing we use iterator.

    // map<int, int> :: iterator iter;
    // for(iter = map1.begin(); iter!=map1.end(); iter++ ){
    //     cout<<(*iter).first<<"->"<<(*iter).second<<endl;
    // }

    // Another way of printing.  where x works as a iterator.
    for(auto x:map1){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    // (*iterator_name).first  -> for keys
    // (*iterator_name).second  -> for values
    
    return 0;
}