/**
 * Author:    Tridib Samanta
 * Created:   08.02.2020
 **/

 // A friend class is a class that can access the private
 //and protected members of a class in which it is declared as friend

#include <iostream>
using namespace std;

class XYZ {

private:
   string message ="Hello Tridib";
   int pin = 700150;
public:
   /* This statement would make class ABC
    * a friend class of XYZ, this means that
    * ABC can access the private and protected
    * members of XYZ class.
    */
   friend class ABC;
};

class ABC {
public:
   void disp(XYZ obj){
      cout<<obj.message<<endl;
      cout<<obj.pin<<endl;
   }
};

int main() {
   ABC obj;
   XYZ obj2;
   obj.disp(obj2);
   return 0;
}
