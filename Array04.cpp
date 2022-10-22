#include <iostream>
using namespace std;

// Array of Objects and Passing object function

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 989;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {

        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    Employee Facebook[4];
    for (int i = 0; i < 4; i++)
    {
        Facebook[i].setId();
        Facebook[i].getId();
    }
    return 0;
}
