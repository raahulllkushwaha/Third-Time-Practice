// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of rows" << endl;
//     cin >> n;
//     int i = 1, count = 1;
//     while (i <= n)
//     {
//         int j = 1, spaces = 1;
//         while (spaces <= n - i)
//         {
//             cout << " ";
//             spaces += 1;
//         }
//         while (j <= i)
//         {
//             cout << count;
//             count++;
//             j++;
//         }
//         cout << endl;
//         i += 1;
//     }
// }

// #OUTPUT

//              1
//         2   3
//      4  5  6
//  7  8  9 10

// #HW Q.14)1:01:43(Dabangg Pattern Question)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = n;

        while (col >= row)
        {
            cout << n - col + 1;
            col--;
        }
        col = n;
        int spaces = 1;
        while (spaces <= 2 * row - 2)
        {
            cout << "*";
            spaces++;
        }
        while (col >= row)
        {
            cout << col - row + 1;
            col--;
        }

        cout << endl;
        row++;
    }
}

// #OUTPUT

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2  1
// 1 2 * * * * * *  2  1
// 1  * * * * * * * *   1
