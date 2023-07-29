#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {10, 20, 5, 3, 56, -9, 4, 6, -98, -78};
    int key;
    cout << "Enter the element to search for" << endl;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }
    return 0;
}