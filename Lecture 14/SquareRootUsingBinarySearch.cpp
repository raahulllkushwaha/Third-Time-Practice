#include <iostream>
using namespace std;
long long int binarySearchSquareRoot(int n)
{
    int s = 0;
    int end = n - 1;
    int mid = s + (end - s) / 2;
    long long int ans = -1;
    while (s <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = s + (end - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSolution)
{
    double factor = 1;
    double ans = tempSolution;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    int tempSolution = binarySearchSquareRoot(n);
    cout << " Answer is " << morePrecision(n, 6, tempSolution) << endl;
    cout << binarySearchSquareRoot(n);
    return 0;
}