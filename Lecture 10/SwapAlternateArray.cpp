#include <iostream>
using namespace std;

void SwapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {5, 4, 7, 8, 0};

    SwapAlternate(even, 6);
    PrintArray(even, 6);

    cout << endl;

    SwapAlternate(odd, 5);
    PrintArray(odd, 5);
}