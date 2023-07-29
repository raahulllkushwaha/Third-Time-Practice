#include <iostream>
#include <string>

using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s, part;

    cout << "Enter string s: ";
    getline(cin, s);

    cout << "Enter substring part: ";
    getline(cin, part);

    string result = removeOccurrences(s, part);
    cout << "Result: " << result << endl;

    return 0;
}
