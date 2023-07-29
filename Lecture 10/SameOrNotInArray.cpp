// Write a program to check if elements of an array are same or not it read from front or back. E.g.-
// 2	3	15	15	3	2

#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 3, 15, 15, 3, 2, 4};
    int read = 1;
    int i, j = 5;
    for (i = 0; i < 6 / 2; i++)
    {
        if (a[i] != a[j])
        {
            read = 0;
            break;
        }
        else
            j--;
    }
    cout << read << "\n";
    return 0;
}