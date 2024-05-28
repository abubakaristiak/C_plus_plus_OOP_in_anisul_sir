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
        void setValue(int x, double y)
        {
            id = x;
            gpa = y;
        }
};
int main()
{
    Student sobuj, asad;
    sobuj.setValue(121, 3.44);
    sobuj.display();

    asad.setValue(122, 3.50);
    asad.display();
    return 0;
}