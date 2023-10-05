#include <iostream>
using namespace std;
int calculateFactorial(int number);
int main()
{
    int n1;
    cout << "Enter the Number:" << endl;
    cin >> n1;
    try
    {
        cout << "Factorial of " << n1 << ":" << calculateFactorial(n1);
    }
    catch (int error)
    {
        cout << "You Entered Negative Number" << endl;
        cout << "Next Time Enter Positive Number" << endl;
    }
    return 0;
}
int calculateFactorial(int number)
{
    int result;
    if (number < 1)
        throw 404;
    if (number == 0 || number == 1)
    return 1;
    else
        result = number * calculateFactorial(number - 1);
        return result;
}