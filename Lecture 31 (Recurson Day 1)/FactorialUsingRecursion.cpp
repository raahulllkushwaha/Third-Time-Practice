#include <iostream>
using namespace std;

long long int factorial(long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    // long long int smallerProblem = factorial(n - 1);
    // long long int bigProblem = n * smallerProblem;

    // return bigProblem;

    return n * factorial(n - 1);
}
int main()
{
    long long int n;
    cout << "Enter numbesr to find factorial of it:- " << endl;
    cin >> n;
    long long int ans = factorial(n);
    cout << "The factorial is :- " << ans << endl;
    
    return 0;
}