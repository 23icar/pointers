#include <iostream>
using namespace std;

int main()
{
    int a = 34000;
    int *pot = &a;
    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *pot << endl;
    cout << "The address of a is " << pot << endl;
    cout << "The address of a is " << &a << endl;
    return 0;
}