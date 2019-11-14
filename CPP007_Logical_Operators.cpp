/**
 * Author:    Tridib Samanta
 * Created:   14.11.2019
 **/

#include<iostream>

using namespace std;

main()
{
    // AND - &&
    // True only when both the expressions are true

    cout << (7>5 && 5!=10) <<endl;
    cout << (2>5 && 5!=10) <<endl;

    // OR - ||
    // True when both the expressions are true or only one of them is true.

    cout << (2>5 || 5!=10) <<endl;
    cout << (2>5 || 5!=5) <<endl;

    // NOT - !
    // Return true if result is false and vice versa.
    cout << !(7>5 && 5!=10) <<endl;

}
