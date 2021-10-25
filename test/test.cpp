#include <iostream>
using namespace std;

int F(int x, int y)
{
    cout << x++ << --y;
    return x + y;
}

void main()
{
    int a = 5, b = 6;
    cout << F(a, b);
}
