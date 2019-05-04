#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long i, unsigned long j, int c)
{
    return c==1 ? i : fibonacci(j, i+j, c-1);
}

int main()
{
    const unsigned long FIRST = 1, SECEND = 1;
    cout << "please enter some number: ";
    int c;
    cin >> c;
    cout << "the " << c << "th of fibonacci: " << fibonacci(FIRST, SECEND, c);
    return 0;
}
