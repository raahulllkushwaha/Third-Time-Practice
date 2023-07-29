#include <iostream>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string arr)
{
    int start = 0;
    int end = arr.length() - 1;
    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
        return 1;
    }
}

bool isPalindrome(string s)
{
    // faltu character hatao
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }
    return checkPalindrome(temp);
}



int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (isPalindrome(input))
    {
        cout << "The string is a valid palindrome." << endl;
    }
    else
    {
        cout << "The string is not a valid palindrome." << endl;
    }

    return 0;
}