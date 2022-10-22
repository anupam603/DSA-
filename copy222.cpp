#include <iostream>

using namespace std;

// Copy Constructors  !!!!

class Number
{
    int a;

public:
    // Number()
    // {
    //     a = 0;
    // }
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    { // Difference
      //  Copy Constructors  !!!!
        cout << "This is an Copy constructor of above !!! " << endl;

        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x(10), y(28), z(25);

    x.display();
    y.display();
    z.display();
    Number z1 = x;
    z1.display();

    Number z3 = z;
    z3.display();

    return 0;
}
