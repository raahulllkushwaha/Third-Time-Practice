#include <iostream>
using namespace std;
int SumOfArr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int a[5], n;
    cout << "Enter size of an array" << endl;

    cin >> n;
    // int num[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The sum of an array is:= " << SumOfArr(a, n);
}