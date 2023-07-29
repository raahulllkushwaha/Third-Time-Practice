// #include <iostream>
// using namespace std;

// // Function to convert a digit to its word form
// string digitToWord(int digit)
// {
//     switch (digit)
//     {
//     case 0:
//         return "zero";
//     case 1:
//         return "one";
//     case 2:
//         return "two";
//     case 3:
//         return "three";
//     case 4:
//         return "four";
//     case 5:
//         return "five";
//     case 6:
//         return "six";
//     case 7:
//         return "seven";
//     case 8:
//         return "eight";
//     case 9:
//         return "nine";
//     default:
//         return "";
//     }
// }

// // Function to convert a number to its word form
// void sayDigitInWords(int n)
// {
//     if (n < 10)
//     {
//         cout << digitToWord(n) << " ";
//         return;
//     }
//     sayDigitInWords(n / 10);
//     cout << digitToWord(n % 10) << " ";
// }

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Number in words: ";
//     sayDigitInWords(n);
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
void sayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
    {
        return;
    }
    // processing
    int digit = n % 10;
    n /= 10;

    // recursive call
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    sayDigit(n, arr);
}