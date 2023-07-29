#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "Enter number ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " "
                 << "Is Not Prime" << endl;
            break;
        }
        else
        {
            cout << n << " "
                 << "Is Prime Number" << endl;
            break;
        }
        
    }
}