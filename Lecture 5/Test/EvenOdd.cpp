#include <iostream>
using namespace std;
bool isEvenOrOdd(int a)
{
    // 1 -> Even
    // 0 -> Odd
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cout << "Enter number to check even or odd";
    cin >> num;
    if (isEvenOrOdd(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
    return 0;
}