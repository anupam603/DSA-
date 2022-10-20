#include <iostream>
using namespace std;

// Constructor Function             :: scope rezolation operator

class Complex
{
    int a, b;

public:
    Complex(void);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
        cout << "Your number is " << a + b << endl;
    }
};

Complex ::Complex(void) // This is a default constructor  as it takes no parameter

{
    a = 12;
    b = 6;
}

int main()
{

    Complex c1;

    c1.printNumber();

    return 0;
}
