#include <iostream>
using namespace std;


int binarySearch(int array[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at the middle index
        if (array[mid] == target) {
            return mid;
        }

        // If the target is greater, ignore the left half
        if (array[mid] < target) {
            left = mid + 1;
        }

        // If the target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Target element is not present in the array
    return -1;
}

int main() {
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 12;
    int result = binarySearch(array, 0, size - 1, target);

    if (result == -1) {
        cout << "Element not found in the array" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}
