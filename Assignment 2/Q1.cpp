#include <iostream>
using namespace std;


class Box
{
    float l,b,h,vol;

    
    public:
    
    
    Box()
    {
    this->l=1.00;
    this->b=1.00;
    this->h=1.00;
    this->vol=1.00;
    }
    
    
    void acceptDimenssions()
    {
        cout<<"Enter the length in cm"<<endl;
        cin>>this->l;

        cout<<"Enter the breadth in cm"<<endl;
        cin>>this->b;

        cout<<"Enter the height in cm"<<endl;
        cin>>this->h;

    }

    void calcVol()
    {
        this->vol=this->l*this->b*this->h;
        cout<<"The volume of Box = "<<this->vol<<" Cubic Centimeter"<<endl;
    }





};


int menu()
    {
        int choice;
        cout << "#############################################################" << endl;
        cout << "0. EXIT" << endl;
        cout << "1. Accept dimenssions of box "<< endl;
        cout << "2. Print volume on Consol" << endl;
        cout<<""<< endl;
        cout << "Enter the choice = "<<endl;
        cin >> choice;
        return choice;
    }
