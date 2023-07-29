#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    // tail recursion
    cout << n << endl;

    // Recursive relation
    print(n - 1);

    // head recursion
    //  cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}