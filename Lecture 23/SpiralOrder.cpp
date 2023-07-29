// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> spiralOrder(vector<vector<int>>& matrix)
// {
//     vector<int> ans;
//     if (matrix.empty())
//         return ans;
//     int row = matrix.size();
//     int col = matrix[0].size();

//     int rowBegin = 0;
//     int rowEnd = row - 1;
//     int colBegin = 0;
//     int colEnd = col - 1;

//     while (rowBegin <= rowEnd && colBegin <= colEnd)
//     {
//         // Traverse Top Row
//         for (int j = colBegin; j <= colEnd; j++)
//             ans.push_back(matrix[rowBegin][j]);
//         rowBegin++;
//         // Traverse Rightmost column
//         for (int i = rowBegin; i <= rowEnd; i++)
//             ans.push_back(matrix[i][colEnd]);
//         colEnd--;
//         // Traverse Bottom Row
//         if (rowBegin <= rowEnd)
//         {
//             for (int j = colEnd; j >= colBegin; j--)

//                 ans.push_back(matrix[rowEnd][j]);
//                 rowEnd--;

//         }

//         // Traverse leftmost column
//         if (colBegin <= colEnd)
//         {
//             for (int i = rowEnd; i >= rowBegin; i--)
//                 ans.push_back(matrix[i][colBegin]);
//             colBegin++;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     vector<int> ans = spiralOrder(matrix);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i]<<" ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    
    vector<int> ans;
    if (matrix.empty())
        return ans;
    int row = matrix.size(), col = matrix[0].size();
    int rowBegin = 0, rowEnd = row - 1, colBegin = 0, colEnd = col - 1;
    while (rowBegin <= rowEnd && colBegin <= colEnd)
    {
        // Traverse top row
        for (int j = colBegin; j <= colEnd; j++)
            ans.push_back(matrix[rowBegin][j]);
        rowBegin++;

        // Traverse rightmost column
        for (int i = rowBegin; i <= rowEnd; i++)
            ans.push_back(matrix[i][colEnd]);
        colEnd--;

        // Traverse bottom row
        if (rowBegin <= rowEnd)
        {
            for (int j = colEnd; j >= colBegin; j--)
                ans.push_back(matrix[rowEnd][j]);
            rowEnd--;
        }

        // Traverse leftmost column
        if (colBegin <= colEnd)
        {
            for (int i = rowEnd; i >= rowBegin; i--)
                ans.push_back(matrix[i][colBegin]);
            colBegin++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = spiralOrder(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
