#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, j;
    int s = 5;
    cout<<"Enter the size of an array: - "<<endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                cout << arr[i] <<" + "<< arr[j]<<"\t";
            }
        }
    }
    return 0;
}
