#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }

    cout<<endl;
    
    for (int i = 0; i < n; i++)
    {
    int count=0; 
        for (int j =0; j < n; j++)
        {
            if(i!=j){
                if (v1[i]==v1[j])  // 22333556
                {
                    count++;
                }
             }
        }
        if (count==0)
        {
            cout<<"Unique elements are: "<<endl;
            cout<<v1[i]<<endl;
        }
        
    }    
        return 0;
}