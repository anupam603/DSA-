#include <iostream>
using namespace std;

// classes of public and private...

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()

    {
        cout << "The value of a is  " << a << endl;
        cout << "The value of b is  " << b << endl;
        cout << "The value of c is  " << c << endl;
        cout << "The value of d is  " << d << endl;
        cout << "The value of e is  " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{

    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee Ganesh;
    Ganesh.d = 77;
    Ganesh.e = 7400;
    Ganesh.setData(1, 22, 13);
    Ganesh.getData();

    return 0;
}
