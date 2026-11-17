//C++ program — Array of Structures
#include <iostream>
using namespace std;

struct Student
{
    int age;
    float marks;
};

int main()
{
    Student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        cout << "Enter age and marks of student " << i + 1 << ": ";
        cin >> s[i].age >> s[i].marks;
    }

    cout << "\nStudent Details:\n";

    for(i = 0; i < 3; i++)
    {
        cout << "Age: " << s[i].age << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}