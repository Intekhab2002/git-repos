/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};


int area(rectangle r){
    return r.length*r.breadth;
}
int perimeter(rectangle r)
{
    int peri=2*(r.length+r.breadth);
    return peri;
}

int main()
{
    struct rectangle r;
    cout<<"Enter length and breadth"<<endl;
    cin>>r.length>>r.breadth;
    int a=area(r);
    int p=perimeter(r);
    cout<<"Area"<<a<<endl;
    cout<<"Perimeter"<<p<<endl;
    

    return 0;
}
