#include <iostream>
using namespace std;
int AP(int n)
{
    int ap = 3 * n + 7;
    return ap;
}
int main()
{
    int n;
    cout << "Enter Nth term of an AP:- " << endl;
    cin >> n;
    cout << "Answer is:- " << AP(n) << endl;
    return 0;
}