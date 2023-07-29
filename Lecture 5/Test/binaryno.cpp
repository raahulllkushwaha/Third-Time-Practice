#include <iostream>
using namespace std;
int main()
{
    int decimal, binary = 0, rem, prod = 1;
    cout << "Enter ny number to convert into binary" << endl;
    cin >> decimal;
    while (decimal != 0)
    {
        rem = decimal % 2;
        decimal = decimal / 2;
        binary = binary + (rem * prod);
        prod = prod * 10;
    }
    cout << "The binary of this no is"<< " " << binary;
}