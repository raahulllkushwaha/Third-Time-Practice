#include <iostream>
using namespace std;

int countDistincWayToClimbStair(long long nStairs)
{
    // base case
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }
    // Recursive call
    int ans = countDistincWayToClimbStair(nStairs - 1) + countDistincWayToClimbStair(nStairs - 2);
    return ans;
}
int main()
{
    long long n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    int ways = countDistincWayToClimbStair(n);
    cout << "Number of distinct ways to climb " << n << " stairs: " << ways << endl;
    return 0;
}
