#include<iostream>
using namespace std;

// Constructors and Constructor Overloading.

/*
- Constructor: is a special member function, with same name as that of class.
 - It automatically invloked.

NOTE :Constructors should be declared in public section only.

TYPES OF CONSTRUCTORS: 
    -> Default Constructor :
        - It takes no parameter.
    -> Parameterised Constructor: 
        - It takes value and set it with requires variable.
        - Two ways of doing this :
            -> Implicit Call: 
                    e.g: complex a(4,6);
            -> Explicit Call:
                    e.g: complex a = complex(5,7);

*/

// Constructor Overloading-> When in same class, more than one constructor is there with different parameter. Depending upon the parameter, cosntructor is used in the program.

class Complex{
    int a,b,c;
    public:
        Complex(void);    // -> This is a deafult construtor.

        Complex(int a1, int b1);
        Complex(int a1, int b1, int c1);   // -> Constructor Overloading.

        void display(){
            cout<<"The number is: "<<a<<" + i"<<b<<endl;
            
        }

};

Complex :: Complex(void){
    a = 11;
    b = 20;
    cout<<"You can write anything in the constructor"<<endl;
}
Complex :: Complex(int a1, int b1){
    a = a1;
    b = b1;
    cout<<"This is a parametirised constructor"<<endl;
}
Complex :: Complex(int a1, int b1, int c1){     
    a = a1;
    b = b1;
    c = c1;
    cout<<"Constucotr Overloading"<<endl;
    cout<<"The value is: "<<a1+b1+c1<<endl;
}

int main()
{
    Complex ele;   // Usng default constructor.
    ele.display();

    Complex ele2(20,30);    //Implicit Calling.
    ele2.display();

    Complex ele3 = Complex(100,200);
    ele3.display();
    
     //here you can see that, we donot call the complex constructor for the value of a and b. Because it is automatically executed.
    Complex ele1(30,30,50);   // Constructor Overloading.
    
    return 0;
} 