#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    // if (n == 0 || n == 1)
    // {
    // return fact;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
// }
int main()
{
    int x;
    cout << "Enter number"<<" ";
    cin >> x;
    cout << factorial(x);
    return 0;
}