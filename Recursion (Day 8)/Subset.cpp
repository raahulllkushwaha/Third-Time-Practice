#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // Base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    
    // Exclude
    solve(nums, output, index + 1, ans);

    // Include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main()
{
    // Test the subsets function
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);

    // Print the subsets
    for (const vector<int> &subset : result)
    {
        cout << "[";
        for (int i = 0; i < subset.size(); i++)
        {
            cout << subset[i];
            if (i < subset.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
