#include <iostream>
using namespace std;

int main()
{
    long long int n, flag = 0;
    cout << "enter number:- " << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime:- " << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime";
    }
}