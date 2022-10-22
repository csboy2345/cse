#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Integer= " << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "The Number is Even" << endl;
    }
    else
    {
        cout << "The Number is odd" << endl;
    }

    return 0;
}