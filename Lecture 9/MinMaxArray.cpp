#include <iostream>
using namespace std;
int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // maxi=max(maxi.num[i]); //This is pre-define funtion of finding MAX and MIN in an array.
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // mini=min(mini,num[i]);  //This is pre-define funtion of finding MAX and MIN in an array.
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout << "Enter size of an array" << endl;
    cin >> size;
    int num[100];
    // Taking input in Array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum value is:- " << getMax(num, size) << endl;
    cout << "Minimum value is:- " << getMin(num, size) << endl;
    return 0;
}