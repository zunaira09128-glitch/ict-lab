#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum(int x, int y);

int main()
{
    int a, b, s;
    cout << "enter two numbers: ";
    cin >> a >> b;
    s = sum(a, b);
    cout << "sum of two numbers = " << s;
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}