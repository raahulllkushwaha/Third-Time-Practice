#include <iostream>
using namespace std;

void reverse(string &str, int i, int j)
{
    cout<<"Call receive for "<<str<<endl;
    // base case
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}

int main()
{

    string myName = "abcde";
    cout<<endl;
    reverse(myName, 0, myName.length() - 1);
    cout<<endl;
    cout << myName << endl;

    return 0;
}