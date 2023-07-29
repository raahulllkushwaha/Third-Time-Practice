#include <iostream>
using namespace std;
int main()
{
    long long int n, rem, rev = 0;
    cout << "Enter a digit:- " << endl;
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << "The reverse of the number is " << rev << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int c = 5;
//     // c++;
//     cout << c++;
//     // cout << ++c;
//     return 0;
// }