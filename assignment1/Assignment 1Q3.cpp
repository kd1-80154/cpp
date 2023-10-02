#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    int marks;

public:
    void initStudent()
    {
        this->name = " ";
        this->rollno = 0;
        this->marks = 0;
    }
    void AcceptStudent()
    {

        cout << "------------------------------------" << endl;
        cout << "Enter student details:" << endl;
        cout << "name" << endl;
        cin >> name;
        cout << "roll no" << endl;
        cin >> rollno;
        cout << "marks out of 100" << endl;
        cin >> marks;
        cout << "------------------------------------" << endl;
    }
    void PrintStudent()
    {
        cout << "------------------------------------" << endl;
        cout << "Student Details:" << endl;
        cout << name<<endl << rollno <<endl<< marks << endl;
    }
};
int main()
{
    Student s1;
    while (true)
    {

        int choice;
        cout << "***Menu***" << endl;
        cout << "1.Accept student Record" << endl;
        cout << "2.Print Student Record" << endl;
        cout << "3.Set Default Student Data" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        switch (choice )
        {
        case 1:
            s1.AcceptStudent();
            break;
        case 2:
            s1.PrintStudent();
            break;
        case 3:
            s1.initStudent();
            break;
        case 4:
            cout << "Exiting Program" << endl;
            break;
        default:
            cout << "You Enter wrong choie" << endl;
            break;
        }
    }
    return 0;
}