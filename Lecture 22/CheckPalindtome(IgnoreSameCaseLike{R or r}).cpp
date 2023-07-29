#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp; 
    }
}

bool checkPalindrome(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (toLowerCase(arr[start]) != toLowerCase(arr[end]))
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

void reverse(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(name[start++], name[end--]);
    }
}
int getLenght(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;

}

int main()
{
    char name[100];
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Your name is " << name << endl;

    int len = getLenght(name);

    cout << "The length of your name is : " << len << endl;

    reverse(name, len);
    cout << "The reverse of your name is " << name << endl;

    cout << "Palindroime or not if yes then return 1 else 0 :-  " << checkPalindrome(name, len) << endl;
    return 0;
}
