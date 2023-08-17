#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

class DivisionByZeroException : public invalid_argument
{
public:
    explicit DivisionByZeroException(const string &msg) : invalid_argument(msg) {}
};

double division(double a, double b)
{
    if (b == 0)
        throw DivisionByZeroException("Dividing by zero is not allowed");
    return a / b;
}

int main()
{
    double result;
    try
    {
        result = division(13, 0);
        cout << "The result is = " << result << endl;
    }
    // This catch block handles DivisionByZeroException type of exception only
    catch (DivisionByZeroException &e)
    {
        cout << e.what() << endl;
    }
    // This catch block handles all other types of exceptions
    catch (...)
    {
        cout << "Error !" << endl;
    }
    return 0;
}
