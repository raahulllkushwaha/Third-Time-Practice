#include <iostream>
using namespace std;
void print(int *a)
{
    cout << a << endl;
    cout << *a << endl;
}

void update(int *p)
{
    // p++;
    // cout << "Inside update function: " << p << endl;
    ++(*p);
    // *p = *p + 1;
}

int getSum(int arr[], int n)
{
    // cout<<"Size of array is:- "<<endl<<sizeof(arr)<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    /*int value = 6;
     int *p = &value;
     // print(p);

     cout << "Value before update:- " << *p << endl;
     update(p);
     cout << "Value after update:- " << *p << endl;


     */
    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "Sum is:- " << getSum(arr + 3, 3) << endl;
    return 0;
}