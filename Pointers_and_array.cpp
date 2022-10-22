#include <iostream>

using namespace std;

int main()
{
    int marks[4] = {1, 2, 3, 4};

    int *p = marks; //Here marks will automatically indicate the address of marks[0]. So *p will store the address of the first element of the array.

    cout << "The value of *p or marks[0] = " << *p << endl;
    cout << "The value of *( p + 1 ) or marks[1] = " << *(p + 1) << endl;
    cout << "The value of *( p + 2 ) or marks[2] = " << *(p + 2) << endl;
    cout << "The value of *( p + 3 ) or marks[3] = " << *(p + 3) << endl;

    cout << *p << endl;
    cout << *(p++) << endl; //Now the value of p has increased by 1. now it will pointing towards 2.
    cout << *p << endl;

    return 0;
}