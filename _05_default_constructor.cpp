#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int id;
        double gpa;
        void display()
        {
            cout << id << "  "<< fixed << setprecision(2) << gpa <<endl;
        }
        Student(int x, double y)
        {
            id = x;
            gpa = y;
        }
        Student()
        {
            cout<< "Bro this is Default constructor!" <<endl;
        }
       
};
int main()
{
    Student sobuj(121, 3.44);
    sobuj.display();

    Student asad(122, 3.50);
    asad.display();

    Student bro;
    return 0;
}