#include<iostream>
#include<fstream>
#include<string>

// fstream -> contains the class which helps you to work with the two exchange of the files.
/*
Other important keyword / classes for the file Handling: 
    -> fstreambase 
    -> ifstream  (Derived from fstreambase)
    -> ofstream   (Derived from fstreambase)

*/ 

/*
There are 2 ways to open the file: 
    1.) Using the constructors.
    2.) Using the member function open() of the class.
*/
using namespace std;

int main()
{
    // Method:1 -> Opening File in Constructors.  {Writing Mode!}

    // 'ofstream' works in writing operation.

    ofstream out("sample.txt"); //--> In place of out here you may give any name here.
    out<<"Hello Ankit Here!";
    out.close();

    // Method:1 -> Opening File in Constructors. {Reading Mode!}

    // 'ifstream' works for reading.

    string s;
    ifstream in("sample.txt"); // Here in place of 'in' you can use any other name also.
    // in>>s;
    // cout<<s<<endl;   

    // The above method for reading has an exception, as this will break when any space or newline comes in the scentence.

    getline(in,s);
    cout<<s;

    in.close();

    // close() --> is used to break the connection between the text file and the code file

    return 0;
}