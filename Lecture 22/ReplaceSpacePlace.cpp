#include <iostream>
using namespace std;

string replaceSpaces(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main()
{
    string input_str;
    cout << "Enter a string: ";
    getline(cin, input_str);

    string replaced_str = replaceSpaces(input_str);

    cout << "String with spaces replaced: " << replaced_str << endl;

    return 0;
} 