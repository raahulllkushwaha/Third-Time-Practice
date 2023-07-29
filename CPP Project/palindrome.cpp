#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    int n, flag = 0;
    cout << "Enter a string:- " << endl;
    cin >> str;
    int len = strlen(str);
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
        cout << "Not palindrome" << endl;
    }
    else
    {
        cout << "palindrome";
    }
}