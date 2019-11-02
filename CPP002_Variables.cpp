#include<iostream>

using namespace std;

main()
{
    //Declaring an integer type variable A, allocates 4 bytes of memory.
    int A=4;

    cout<<A <<endl;
    //Prints the address of the variable A.
    cout<<&A <<endl;

    /*
        1. Variables cant have the same name.
        2. Variable name cant start with a number.
        3. Variable name should not contain spaces.
        4. Variable name should be self-descriptive.
        5. Variable name can't have special characters or keywords.
    */

    //Re-initialization of A.
    A=10;
    cout<<A <<endl;
    cout<<&A;
}
