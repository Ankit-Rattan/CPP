#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n;
    cout<<"Enter : "<<endl;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sort(v.begin(), v.end());

    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;

    // Lower Bound
    int  *p1 = lower_bound(v.begin(), v.end(), key);

    cout<<"Address of the finding element: "<<p1<<endl;
    cout<<"Value of the finding element: "<<*p1<<endl;

    int ind1 = lower_bound(v.begin(), v.end(), key) - v.begin();    
    cout<<"Index of the finding element: "<<ind1<<endl;

    // Upper Bound

    int *p2= upper_bound(v.begin(), v.end(), key);

    cout<<"Address of the finding element: "<<p2<<endl;
    cout<<"Value of the finding element: "<<*p2<<endl;

    int ind2 = upper_bound(v.begin(), v.end(), key) - v.begin();    

    cout<<"Index of the fUPNEXT inding element: "<<ind2<<endl;

    return 0;

}   
// Lower_Bound ==> It will give the address of the element that is searching in the array or the vector. If element not found then it will give the next elemtent.

// Upper_Bound ==> Irrespective of the elment os presesnt on the array or vecotr or not, it will give the address of the next element of the target element.

/*
    Syntax :
      ->  lower_bound(starting iterator, ending iterator, target element);  --> This will give the address of the element.

      ->  upper_bound(starting iterator, ending iterator, target element); --> This will give the addess of the UPNEXT target element.


    NOTE: 

        For the index of the element: 

        int ind = lower_case(starting iterator, ending iterator, target element) - v.begin();  --> This will give the index of the target elemtent.

        int ind = upper_case(starting iterator, ending iterator, target element) - v.begin();  --> This will give the index of the UPNEXT target elemtent.        


*/
