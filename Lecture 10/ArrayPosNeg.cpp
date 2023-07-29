#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number\n";
        cin >> a[i];
    }
    int j = 0;
    for (int i = 4; i >= 0; i--)
    {
        b[i] = a[j];
        j++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}