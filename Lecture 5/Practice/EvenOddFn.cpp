#include <iostream>
using namespace std;
void EvenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " "
             << "is Even number";
    }
    else
    {
        cout << n << " "
             << "is Odd number";
    }
}
int main()
{
    int num;
    // register int i;
    // auto int i;
    // extern int i;
    // mutable int i;
    cout << "Enter a number to check even or odd";
    cin >> num;
    EvenOdd(num);
}