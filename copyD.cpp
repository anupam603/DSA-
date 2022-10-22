#include <iostream>
using namespace std;

// Multilevel Inheritance

class Student
{
//protected:                         Differenec
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{

    roll_number = r;
}
void Student ::get_roll_number()
{

    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float english;

public:
    void set_marks(float m1, float m2);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{

    maths = m1;
    english = m2;
}

void Exam ::get_marks()
{

    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in english are " << english << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();

        cout << "Your percentage is " << (maths + english) / 2 << endl;
    }
};

int main()
{

    Result ganesh;
    ganesh.set_roll_number(7400);
    ganesh.set_marks(98.20, 99.40);
    ganesh.display_result();


    return 0;
}
