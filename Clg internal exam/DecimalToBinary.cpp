#include <iostream>
using namespace std;

int main()
{
    int decimal, binary = 0, remainder, product = 1;
    cout << "Enter any decimal number: - " << endl;
    cin >> decimal;
    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + remainder * product;
        decimal = decimal / 2;
        product = product * 10;
    }
    cout << "The binary of this " << decimal << " is " << binary;
    return 0;
}