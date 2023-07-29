#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int j = 1, num, k, l;
    while (i <= n)
    {
        j = n - i + 1;
        num = 1;
        while (j > 0)
        {
            cout << num << " ";
            num++;
            j--;
        }
        // k = (i - 1) * 2;
        // while (k > 0)
        // { // stars
        //     cout << "* ";
        //     k--;
        // }
        int spaces = 1;
        while (spaces <= 2 * i - 2)
        {
            cout << "* ";
            spaces++;
        }
        l = n - i + 1;
        while (l > 0)
        {
            cout << l << " ";
            // num--;
            l--;
        }

        cout << endl;
        i++;
    }
}