#include<iostream>

using namespace std;

main()
{
    int a=10,b=35; // 4 bytes
    cout<<"Value of a : "<<a<<" Address of a : "<<&a <<endl;
    cout<<"Value of b : "<<b<<" Address of b : "<<&b <<endl;

    short s=20; //2 bytes
    cout <<"Value of s : "<< s << endl;

    float f1=20.03; //4 bytes
    double d1=50.55416416; //8 bytes
    cout <<"Value of f1 : "<< f1 << endl;
    cout <<"Value of d1 : "<< d1 << endl;

    char c1='A';
    cout<<c1<<endl;

    string s1="Hello Tridib";
    cout<<s1<<endl;

    string s2="Welcome to CPP !";
    cout<<s2<<endl;

    string combineStrings=s1+", "+s2;
    cout<<combineStrings<<endl;

    bool b1=true; //Boolean is true or false. FALSE IS ALWAYS ZERO, EVERY OTHER NUMBER IS TRUE.
    cout<<b1<<endl;
    b1=1515;
    cout<<b1<<endl;
    b1=-445;
    cout<<b1<<endl;
    b1=0;
    cout<<b1<<endl;

    //Positive numbers or unsigned numbers. Increases the positive range.
    unsigned short int u1=60445;
    cout<< u1 <<endl;

    const string myname="Tridib";
    cout << myname << endl;

}
