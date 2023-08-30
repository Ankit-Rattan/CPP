#include<iostream>
using namespace std;

// Tower of Hanoi (RECURSION)

void towerOfHanoi(int n, char start, char aux, char dest){
    if(n==0){
        return;
    }
    // First time: exchange the pos. of dest and aux
    towerOfHanoi(n-1, start, dest, aux);
    cout<<"Move from "<<start<<" to "<<dest<<endl;
    // Then, change the pos of aux and start.
    towerOfHanoi(n-1, aux, start, dest);
}

int main()
{
    int n;
    cout<<"Enter the number of the disk: "<<endl;
    cin>>n;
    towerOfHanoi(n, 'A','B','C');
    return 0;
}