#include<iostream>
using namespace std;
// Topic:  Basics of Class

class Emp{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);  // We will define the function afterwards
        void getData(){
            cout<<"The value of a is :"<<a<<endl;
            cout<<"The value of b is :"<<b<<endl;
            cout<<"The value of c is :"<<c<<endl;
            cout<<"The value of d is :"<<d<<endl;
            cout<<"The value of e is :"<<e<<endl;
        }  

};
// Declaring a function for class explicitly->
void Emp :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Emp ele1;
    ele1.d  = 12;
    ele1.e = 13;
    // ele1.a = 2;    -> We cannot do this because it is private data of the class.
    
    ele1.setData(1,2,3);

    ele1.getData();
    return 0;
}
