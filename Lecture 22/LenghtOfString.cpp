#include <iostream>
using namespace std;

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
    cout << "The length of your name is : " << getLenght(name) << endl;

    return 0;
}