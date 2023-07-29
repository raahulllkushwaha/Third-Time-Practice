// #include <iostream>
// #include <vector>

// int binarySearch(const std::vector<int> &vec, int target)
// {
//     int left = 0, right = vec.size() - 1;
//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         if (vec[mid] == target)
//         {
//             return mid;
//         }
//         else if (vec[mid] < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     std::vector<int> vec{1, 2, 3, 4, 5, 6};
//     int target = 4;
//     int result = binarySearch(vec, target);
//     if (result == -1)
//     {
//         std::cout << "Element not present in the array." << std::endl;
//     }
//     else
//     {
//         std::cout << "Element found at index " << result << "." << std::endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int find_largest(int nums[], int n) {
// //  return(nums, nums + n);
// }

// int main() {
//   int nums[] = {
//     5,
//     4,
//     9,
//     12,
//     8
//   };
//   int n = sizeof(nums) / sizeof(nums[0]);
//     cout << "Original array:";
//     for (int i=0; i < n; i++)
//     cout << nums[i] <<" ";

//   cout << "\nLargest element of the said array: "<< find_largest(nums, n);
//   return 0;
// }

#include <iostream>
using namespace std;

// int main()
// {
//     int z[20];
//     int pos = 0;
//     int neg = 0;
//     int odd = 0;
//     int even = 0;
//     int zero = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter a number\n";
//         cin >> z[i];

//         if (z[i] > 0)
//             pos++;
//         else if (z[i] < 0)
//             neg++;
//         else
//             zero++;
//         if (z[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }
//     cout << "Positive " << pos << "\nNegative " << neg << "\nZero " << zero << "\nOdd " << odd << "\nEven " << even << "\n";
//     return 0;
// }

int main()
{
    int arr[20];
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int even = 0;
    int odd = 0;
    for (int i = 0; i <= 20; i++)
    {
        cout << "Enter a number " << endl;
        cin >> arr[i];

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Positive " << positive << endl
         << "Negative " << negative << endl
         << "Zero " << zero << endl
         << "Even " << even << endl
         << "Odd " << odd << endl;
    return 0;
}