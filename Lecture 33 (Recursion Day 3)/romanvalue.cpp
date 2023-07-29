#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> roman_values = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};
        
    int total = 0;

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (roman_values[s[i]] < roman_values[s[i + 1]])
        {
            total -= roman_values[s[i]];
        }
        else
        {
            total += roman_values[s[i]];
        }
    }

    total += roman_values[s.back()]; // Add the value of the last symbol
    return total;
}

int main()
{
    string roman_numeral = "MCMXCIV";
    int result = romanToInt(roman_numeral);
    cout << "Roman numeral " << roman_numeral << " is equivalent to integer " << result << endl;
    return 0;
}
//  {'I', 1},
//         {'IV', 4},
//         {'V', 5},
//         {'IX', 9},
//         {'X', 10},
//         {'XL', 40},
//         {'L', 50},
//         {'XC', 90},
//         {'C', 100},
//         {'CD', 400},
//         {'D', 500},
//         {'CM', 900},
//         {'M', 1000}};
