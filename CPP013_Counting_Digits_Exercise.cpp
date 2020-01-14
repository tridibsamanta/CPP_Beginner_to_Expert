/**
 * Author:    Tridib Samanta
 * Created:   14.01.2020
 **/

#include<iostream>
using namespace std;

main() {
    int num,digits_count=1;
    cin>>num;
    int temp=num;
    //Divide the number by 10, until we get quotient as 0
    while(temp/=10)
        //Increase the digit count by 1
        digits_count++;

    cout<<"The number "<<num<<" has "<<digits_count<<" digit(s)"<<endl;
}
