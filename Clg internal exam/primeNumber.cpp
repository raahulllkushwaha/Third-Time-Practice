#include "iostream"
using namespace std;

int main()
{
    int n, flag = 0;
    cout << "Enter the number to check prime:- " << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Numbr is not prime " << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Number is prime: " << endl;
        return 0;
    }
}