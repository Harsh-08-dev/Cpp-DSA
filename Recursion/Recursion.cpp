#include <iostream>
using namespace std;

void func1(x);
int main()
{
    int x = 10;
    void func1(x)
    {
        x = x - 1 cout << "Hello";
        void func1(x - 2);
    }
    return 0;
}