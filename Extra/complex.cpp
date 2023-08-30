#include<iostream>
using namespace std;

class Complex{
    int a,b,c,d;
    public:
        Complex(){
            cout<<"Enter the real part of first complex number: ";
            cin>>a;
            cout<<"Enter the imaginary part of first complex number: ";
            cin>>b;      
            cout<<"Enter the real part of second complex number: ";
            cin>>c;
            cout<<"Enter the imaginary part of second complex number: ";
            cin>>d;    
        }
        void getData(){
            cout<<endl;
            cout<<"First Complex Number is: "<<a<<" + "<<b<<"i"<<endl;
            cout<<"Second Complex Number is: "<<c<<" + "<<d<<"i"<<endl;
        }
        void Adding(){
            cout<<endl;
            cout<<"The Addition of the given two Complex numbers is: ";
            cout<<a+c<<" + "<<b+d<<"i"<<endl;
        }
        void Mult(){
            cout<<endl;
            cout<<"The multiplication of the given two Complex number is: ";
            cout<<(a*c) - (b*d)<<" + "<<(a*d) + (b*c)<<"i"<<endl;
        }
        void Sub(){
            cout<<endl;
            cout<<"The Subtraction of the given two Complex numbers is: ";
            cout<<a-c<<" + "<<b-d<<"i"<<endl;
            
        }
        

};

int main()
{
    cout<<"---------- COMPLEX CALCULATOR------------"<<endl;
    Complex c1;
    c1.getData();
    c1.Adding();
    c1.Sub();
    c1.Mult();
    
    return 0;
}