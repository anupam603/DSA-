#include <iostream>
using namespace std;

//  Copy Constructor.


class simple
{
    int a;

public:
    simple()
    {
        a = 0;
    }
    simple(int num)
    {
        a = num;
    }
    void dispaly()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    simple x(10), y(28), z(25);

    x.dispaly();
    y.dispaly();
    z.dispaly();

    return 0;
}
