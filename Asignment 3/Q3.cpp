#include <iostream>
using namespace std;
#define SIZE 5

class Stack
{
private:
   static int top;

public:
   Stack()
   {
      top = -1;
   }

   void pop(int *ptr)
   {
      if (this->isEmpty() != 1)
      {
         ptr[top] = 0;
         top--;
         cout << "deleted" << endl;
         cout << top << "inside pop" << endl;
      }
      else
      {
         cout << "STACK IS EMPTY CAN NOT DELETE VALUE" << endl;
      }
   }
   void peek(int *ptr)
   {
      if (this->isEmpty() != 1)
      {
         cout << "ELEMENT :" << ptr[top] << endl;
      }
      else
      {
         if (ptr[top] == 0)
         {
            cout << "STACK IS EMPTY CAN NOT PEEK" << endl;
         }
      }
   }

   bool isEmpty()
   {
      if (top == -1)
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
   bool isFull()
   {
      if (top == SIZE - 1)
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
   void print(int *ptr)
   {
      cout << "THE STACK ELEMENTS :" << endl;
      cout << "" << endl;
        cout << "" << endl;
      cout << "[";
      for (int i = 0; i < SIZE; i++)

         cout << "]";
      cout << "" << endl;
   }
   void push(int *ptr, int val)
   {
      if (this->isEmpty())
      {
         top++;
         ptr[top] = val;
         cout << "ELEMENT ADDED TO STACK" << endl;
      }
      else if (this->isFull())
      {
         cout << "STACK IS FULL" << endl;
      }
      else
      {
         top++;
         ptr[top] = val;
         cout << "ELEMENT ADDED TO STACK top =" << top << endl;
      }
   }
};
enum EMainMenu
{
   EXIT,
   ADD,
   DELETE,
   PEEK,
   PRINT
};
int Stack::top=-1;
EMainMenu menu()
{
   int choice;
   cout<<"------------------------"<<endl;
   cout<<""<<endl;
   cout<<"0. EXIT"<<endl;
   cout<<"1. ADD Element on the stack"<<endl;
   cout<<"2. DELETE Element on the stack"<<endl;
   cout<<"3. PEEK Element on the stack"<<endl;
   cout<<"4. PRINT the stack"<<endl;
   cout<<"------------------------"<<endl;

   cout<<"Enter your choice= ";
   cin>> choice;
   return EMainMenu(choice); 

}

int main()
{
   Stack S1;
   
    int *ptr =new int[5];
    EMainMenu choice;

    while ((choice = menu()) != EXIT)
    {
      switch (choice)
      {
         case ADD:
         bool S;
         int val;
         S= S1.isFull();
         if(S==1){cout<<"STACK IS FULL"<<endl;}
         else{cout<<""<<endl; cout<<"Enter value to push"<<endl;
         cin>>val;
         S1.push(ptr,val);}
         break;

         case DELETE:
         S1.pop(ptr);
         break;
         case PEEK:
         S1.peek(ptr);
         break;
         case PRINT:
         S1.print(ptr);
         break;
         default:
         cout<< "WRONG CHOICE" <<endl;
         break;

      }
    }
    return 0;
}