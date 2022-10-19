#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number" << endl;
    cin >> num;

    if ((num % 2) == 0)
    {

        cout << num  <<" This is the  even number" << endl;
       
    }
    else
    {
        cout << num   <<" This is the odd number" << endl;
    }

    return 0;
}
