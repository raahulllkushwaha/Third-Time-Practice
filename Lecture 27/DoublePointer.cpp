#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Printing p " << p << endl;
    cout << "Address of p " << &p << endl;
    return 0;
}