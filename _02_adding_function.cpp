#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int id;
        double gpa;
        void display(){
            cout << id << "  "<<fixed << setprecision(2) << gpa <<endl;
        }
};
int main()
{
    Student sobuj, asad;
    sobuj.id = 101;
    sobuj.gpa = 3.44;
    sobuj.display();

    asad.id = 232;
    asad.gpa = 3.80;
    asad.display();
    return 0;
}