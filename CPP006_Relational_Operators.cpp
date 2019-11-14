/**
 * Author:    Tridib Samanta
 * Created:   14.11.2019
 **/

#include<iostream>

using namespace std;

main()
{
    cout<<"Relational Operators !"<<endl;

    int a=10;
    int b=5;
    //True=1 ; False=0 ;
    cout << (a==b)<<endl; //Returns true when value of variable a is equal to variable b.
    cout << (a!=b)<<endl; //Returns true when value of variable a is not equal to variable b.
    cout << (a<b)<<endl;
    cout << (a>b)<<endl;
    cout << (a<=b)<<endl;
    cout << (a>=b)<<endl;
    cout << !(a==b)<<endl; // (a!=b)
}
