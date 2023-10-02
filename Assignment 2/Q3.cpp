#include <iostream>
#include<string>
using namespace std;

namespace NS1{

struct Student
{
    int roll,marks;
    string name;

    void initStudent(Student *ptrStudent)
    {
        ptrStudent->roll=01;
        ptrStudent->name="student";
        ptrStudent->marks=80;
    }

    void acceptStudentFromConsole(Student *ptrStudent)
    {
        cout<<"Enter Roll No. - "<<endl;
        cin>>ptrStudent->roll;

        cout<<"Enter Name - "<<endl;
        cin>>ptrStudent->name;

        cout<<"Enter Marks - "<<endl;
        cin>>ptrStudent->marks;
        cout<<" "<<endl;  
    }

    void printStudentOnConsole( Student * ptrStudent)
    {
        cout<<"............................................."<<endl;
        cout<<""<<endl;
        cout<<"STUDENT DETAILS :"<<endl;
        cout<<""<<endl;
        cout<<"STUDENT ROLL NO :"<<ptrStudent->roll<<endl;
        cout<<"STUDENT NAME :"<<ptrStudent->name<<endl;
        cout<<"STUDENT MARKS :"<<ptrStudent->marks<<endl;
        cout<<""<<endl;
        cout<<"............................................."<<endl;
        


    }
    };
}
    


    int menu()
    {
        int choice;
        cout << "#############################################################" << endl;
        cout << "0. EXIT" << endl;
        cout << "1. Accept Student Data" << endl;
        cout << "2. Display Student Data on Consol" << endl;
        cout<<""<<endl;
        cout << "Enter the choice = "<<endl;
        cin >> choice;
        return choice;
    }

using namespace NS1;
int main()

{

    struct Student S1;
    S1.initStudent(&S1);

    
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            S1.acceptStudentFromConsole(&S1);
            break;
        case 2:
            S1.printStudentOnConsole(&S1);
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }

    
    return 0;
}