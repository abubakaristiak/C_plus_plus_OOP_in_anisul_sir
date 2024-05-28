#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int id;
        double gpa;
};
int main()
{
    Student sobuj;
    sobuj.id = 101;
    sobuj.gpa = 3.44;
    cout << sobuj.id << "  " << sobuj.gpa <<endl;


    Student asad;
    asad.id = 232;
    asad.gpa = 3.45;
    cout<<asad.id << "  " << asad.gpa << endl;
    return 0;
}