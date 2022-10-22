#include <iostream>
using namespace std;

// Varitual Base in C++ !!

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is  " << roll_no << endl;
    }
};

class Test : virtual public Student
{

protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {

        cout << "Your result is here: " << endl
             << "maths marks are: " << maths << endl
             << "physics marks are: " << physics << endl;
    }
};

class Sports : virtual public Student
{

protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{

private:
    float total;

public:
    void show(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();

        cout << "Your total score is " << total << endl;
        cout<<"Your total score percentage is "<< total/3 <<endl;     //Differenec
    }
};

int main()
{

    Result ganesh;
    ganesh.set_number(7400);
    ganesh.set_marks(98.02, 99.5);
    ganesh.set_score(98);
    ganesh.show();

    return 0;
}
