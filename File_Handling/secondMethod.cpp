#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    // Method:2 ->  Using member function 'open()'. {Writing}

    ofstream out;
    out.open("sample2.txt");       // To open the file
    out<<"This is Ankit Rattan!";  // To write in the file
    out.close();                    // To close the file

    // Method:2 ->  Using member function 'open()'. {Reading}

    string s;
    ifstream in;
    in.open("sample2.txt");
    getline(in, s);
    cout<<s;
    in.close();

    cout<<endl;

    // Writing for sample 3;

    ofstream out1;
    out1.open("sample3.txt");       
    out1<<"This is Ankit Rattan!";  
    out1<<"I am from NIT Delhi";  
    out1.close();                   
    // eof()--> end of file ifstream

    ifstream in1;
    string st;
    in1.open("Sample3.txt");
    while(in1.eof()== 0){
        getline(in1,st);
        cout<<st<<endl;
    }
    in1.close();
    return 0;
}