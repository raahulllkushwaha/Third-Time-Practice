#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter rows and column";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout <<row;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter rows and column";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = i;
        
//         while (j < 2 * i)
//         {
//             cout << j;
            
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }