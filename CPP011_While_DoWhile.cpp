/**
 * Author:    Tridib Samanta
 * Created:   14.01.2020
 **/

#include<iostream>
using namespace std;

main() {
    int i=0;
    while(i<10) {
        cout<<"Hello"<<endl;
        //Increment inside the body of the loop
        i++;
    }
    int j=10;
    while(j--)
        cout<<j<<endl;

    //Does not check the condition at the beginning
    //Hence execute instructions inside the do block at least once
    do {
        cout<<"Hello"<<endl;
        i--;
    }
    while(i);
}
