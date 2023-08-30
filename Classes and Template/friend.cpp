#include<iostream>
using namespace std;

// Friend Functions -> When you want private object of the class to be used as the public object.
// Syntax -> friend class :: function_name;

// NOTE -> If you want to make all private functions to be used as public, then use-> freind class;

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
    friend class Emp2;      // Declaring Friend function for class Emp2

};
class Emp2{
    public :
        void mult(int a1, int b1, int c1){
            int a = a1;
            int b = b1;
            int c = c1;
            cout<<"MULT of a,b,c: "<<a*b*c<<endl;
        }

};
void Emp :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Emp ele1;
    ele1.d  = 12;
    ele1.e = 13;
    ele1.setData(1,2,3);
    ele1.getData();    
    Emp2 ele2;
    ele2.mult(2,5,4);
    
    return 0;
}