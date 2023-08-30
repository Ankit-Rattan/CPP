#include<iostream>
#include<unordered_map>

using namespace std;
/**
 The difference btw maps and unordered maps is the way of declaration and the way of storing data.

 Unordered Maps: 
    -> Using Hashing.
    -> Operations done in: O(1);
    -> Based on unbalance trees. 
    -> Not possible to maintain order between elements.
    
Note: Preffered to use unorder maps due to best time complexity.    
*/
int main()
{
    unordered_map<int, int> umap;
    umap[1] = 10;
    umap[2] = 20;
    umap[3] = 30;
    umap[4] = 40;


    // NOTE: here also you can use both of the methods to print the data.

    // Method-1
    for(auto x:umap){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    cout<<endl;
     
    //Method-2
    unordered_map<int,int> :: iterator iter;
    for( iter = umap.begin(); iter!=umap.end(); iter++){
        cout<<(*iter).first<<"->"<<(*iter).second<<endl;
    }
    
    return 0;
}