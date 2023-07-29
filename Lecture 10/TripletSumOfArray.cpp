#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j, k;
    int s = 12;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << " + " << arr[j] << " + " << arr[k] << "\t";
                }
            }
        }
    }
    return 0;
}
