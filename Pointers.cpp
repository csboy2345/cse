#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int *b = &a;
    // We can also write b = &a.

    //Both b and &a will return the address of the variable a where it is stored in RAM.
    // &---> (Address of) operator.
    cout << "The address of a = " << b << endl;
    cout << "The address of a = " << &a << endl;

    //If we want to the find that what value is present on that address then we have to use *.
    // *---> (Value at) Dereference Operator.
    //It will return 3 because a = 3.
    cout << "The value at that address = " << *b << endl;

    return 0;
}