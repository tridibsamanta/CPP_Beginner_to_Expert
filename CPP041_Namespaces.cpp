/**
 * Author:    Tridib Samanta
 * Created:   03.03.2020
 **/

#include<iostream>
using namespace std;

namespace A
{
    int var = 20;
}

namespace B
{
    int var = 40;
}

int main() {
    int var = 50;
    //Accessing var from namespace std
    cout<<var<<endl;
    //Accessing var from namespace A
    cout<<A::var<<endl;
    //Accessing var from namespace B
    cout<<B::var<<endl;
    return 0;
}
