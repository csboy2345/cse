#include <iostream>

using namespace std;

int f(int n)
{
    int count = 0;
    int last_digit;

    while (n != 0)
    {
        last_digit = n % 10;
        count++;
        n = n / 10;
    }

    return count;
}

int main()
{
    int n;

    cin >> n;

    cout << f(n) << endl;

    return 0;
}