/**
 * Author:    Tridib Samanta
 * Created:   16.01.2020
 **/

#include<iostream>
using namespace std;

int main() {

    int amount;
    cout<<"How many numbers would you like to store in the array ? "<<endl;
    cin>>amount;

    int *p = new (nothrow) int(amount);

    if(p != NULL) {
        for(int i=0;i<amount;i++) {
            cout<<"Enter the "<<(i+1)<<" number : "<<endl;
            cin>>p[i];
        }

        cout<<endl<<endl;

        for(int i=0;i<amount;i++) {
            cout<<"p["<<i<<"] = "<<p[i]<<endl;
        }
    }
    else
        cout<<"Not enough Memory ! "<<endl;

    return 0;
}
