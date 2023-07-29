#include <iostream>
using namespace std;

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

    return 0;
}
