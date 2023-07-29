#include <iostream>
using namespace std;

int main()
{
    int i, j, arr[100], arr1[100], n, m;
    cout << "Enter size of first array";
    cin >> n;

    cout << "Enter size of second array";
    cin >> m;

    cout << "Enter " << n << " elements of first array" << endl;
    cout << "Enter " << m << " elements of asecond array" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (j = 0; j < m; j++)
    {
        cin >> arr1[j];
    }
    cout << "Intersecting array are";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i] == arr1[j])
            {
                cout << endl
                     << arr1[j];
                break;
            }
            else{
                cout<<"No array are intersecting"<<endl;
                break;
            }
            break;
                }
    }

    return 0;
}
