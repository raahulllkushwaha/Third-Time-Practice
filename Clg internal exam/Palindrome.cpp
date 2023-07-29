#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[10];
    int len, flag = 0;
    cout << "Enter any string:- " << endl;
    cin >> str;
    len = strlen(str);
    // strcpy(str)
    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "Not palindrome " << str << endl;
    }
    else
    {
        cout << "Palindrome " << str << endl;
    }
    return 0;
}