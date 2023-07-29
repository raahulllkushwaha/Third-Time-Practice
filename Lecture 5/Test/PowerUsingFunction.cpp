#include <iostream>
using namespace std;
int power()
{
    int a, b;
    cout << "Enter number";
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int ans = power();
    cout << "Answer is:  " << ans << endl;

    int answer = power();
    cout << "Answer is:  " << answer << endl;

    int answ = power();
    cout << "Answer is:  " << answ << endl;

    int answe = power();
    cout << "Answer is:  " << answe << endl;
    
    return 0;
}