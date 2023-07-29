public class BinarySearch {
    // Returns the index of the target element if found, otherwise returns -1
    public static int binarySearch(int[] array, int target) {
        int left = 0;
        int right = array.length - 1;

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

    public static void main(String[] args) {
        int[] array = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        int target = 13;
        int result = binarySearch(array, target);

        if (result == -1) {
            System.out.println("Element not found in the array");
        } else {
            System.out.println("Element found at index " + result);
        }
    }
}
