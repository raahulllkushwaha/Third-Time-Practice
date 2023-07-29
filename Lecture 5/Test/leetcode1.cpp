#include <iostream>
using namespace std;
int main()
{
    class Solution
    {
    public:
    
        int Subtract(int n)
        {
            int prod = 1, sum = 0;
            cin>>n;
            while (n != 0)
            {
                int digit = n % 10;
                prod = prod * digit;
                sum = sum + digit;
                n = n / 10;
            }
            int answer = prod - sum;
            return answer;
            // cout<<"answer";
        }
    };
}