#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> list1;  // List with Zero-Lenght;
    list1.push_back(1);
    list1.push_back(3);
    list1.push_front(9);
    list1.push_front(7);
    list1.pop_back(); 
    // cout<<list1[0]<<endl;  -> you cannot directly print element using cout.

    // For printing list you need to use the iterator.
    list<int> :: iterator iter;
    iter = list1.begin();
    cout<<"List-1"<<endl;
    for(int i=0; i<list1.size(); i++){
            cout<<*iter<<" ";
            
            iter++;

    } 
    cout<<endl; 

    list<int> list2(7); // Emplty list of size 7;
    list<int> :: iterator iter1;
    iter1 = list2.begin();
    cout<<"Empty list of size 7"<<endl;
    for(int i=0; i<list2.size(); i++){
            cout<<*iter1<<" ";
            
            iter1++;

    }  
    cout<<endl;

    //Merging two list
    list1.merge(list2); 
    cout<<"List1 after merging with list 2"<<endl;
        for(int i=0; i<list1.size(); i++){
            cout<<*iter<<" ";
            
            iter++;

    } 
    cout<<endl;
    cout<<"List 2 after merging"<<endl;
        for(int i=0; i<list2.size(); i++){
            cout<<*iter1<<" ";
            
            iter1++;

    }  
    cout<<endl; 
    

    return 0;
}