#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    fill_n(arr, 100, -89);
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << endl;
    }
}