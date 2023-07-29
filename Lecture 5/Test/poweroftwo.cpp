#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number";
    cin >> n;
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            return true;
            // cout<<"true";
        }

        return false;
    }
}