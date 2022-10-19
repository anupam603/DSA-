#include <iostream>
using namespace std;

// Array

int main()
{
    int marks[] = {23, 45, 56, 89};

    int mathMarks[] = {2278, 22, 78, 228};    // this
                                             //  OR
    // mathMarks[0] = 2278;                  // this
    // mathMarks[1] = 22;
    // mathMarks[2] = 78;
    // mathMarks[3] = 228;

    cout << "This are marks" << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << "This are mathMarks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;


    return 0;
}

