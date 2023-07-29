#include <iostream>
using namespace std;

int main()
{
    int i, j, arr[100], n;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    cout << "Enter " << n << " elements of an array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Dublicate array are" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << endl
                     << arr[j];
                break;
            }
        }
    }

    return 0;
}