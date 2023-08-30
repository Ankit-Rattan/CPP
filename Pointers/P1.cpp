#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    cout<<num<<endl;

    int* p = &num;
    cout<<"Address of num is "<<&num<<endl;
    cout<<"Address stored in p(i.e address of num) "<<p<<endl;
    cout<<"Address of pointer p "<<&p<<endl;
    cout<<"Value p is pointing "<<*p<<endl;

    // Copy of the Array: 
    int i=10;
    int *p1 = &i;
    int *q = p1;
    cout<<*q<<endl;
    cout<<*p1<<endl;


    return 0;
}