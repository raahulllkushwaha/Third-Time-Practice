#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &v, int start, int end)
{
    while (start < end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int n = v.size();
    int m = 3; // position after which vector is to be reversed

    cout << "Original vector: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    reverseVector(v, m + 1, n - 1); // reverse subvector after position M

    cout << "\nVector after reversal: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
