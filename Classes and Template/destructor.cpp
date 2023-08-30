#include<iostream>
using namespace std;

/*
 Destructors:
    -> It is used when we are destrying a constructor and also want to free the space taken by it. So for freeing up the space we use the destructors.
    -> It never takes an argument nor return any value.
*/
int count =0;

class box{
    
    public:
        box(){
            count++;
            cout<<"This is a constructor"<<count<<endl;
        }
        ~box(){ 
            
            cout<<"This is a destructor"<<count<<endl;
            count--;
        }

};
int main()
{
    box b;
    // starting block-> which means isme hi start ho ke end ho jayega
    {
        cout<<" Block is started"<<endl;     
        box b1;
        box b2;
        cout<<"Box is ended"<< endl;

    }
    return 0;
}