/**
 * Author:    Tridib Samanta
 * Created:   08.02.2020
 **/

/*
Copy Constructor is a type of constructor which is used to create a copy of an already existing object of a class type.
It is usually of the form X (X&), where X is the class name.
The compiler provides a default Copy Constructor to all the classes.
*/

#include<iostream>
using namespace std;
class Samplecopyconstructor
{
    private:
    int x, y;   //data members

    public:
    Samplecopyconstructor(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    /* Copy constructor */
    Samplecopyconstructor (const Samplecopyconstructor &sam)
    {
        x = sam.x;
        y = sam.y;
    }

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
/* main function */
int main()
{
    Samplecopyconstructor obj1(10, 15);     // Normal constructor
    Samplecopyconstructor obj2 = obj1;      // Copy constructor
    cout<<"Normal constructor : ";
    obj1.display();
    cout<<"Copy constructor : ";
    obj2.display();
    return 0;
}
