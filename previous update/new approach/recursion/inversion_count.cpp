#include <iostream>
using namespace std;
long long merge(int* arr, int* temp, int left, int mid, int right) {
    int i = left;      // Index for left sub-array
    int j = mid + 1;   // Index for right sub-array
    int k = left;      // Index for temp array
    long long inversionCount = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            // Inversion found, add the count
            inversionCount += (mid - i + 1);
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements from the left sub-array, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from the right sub-array, if any
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy elements back from temp to the original array
    for (int m = left; m <= right; m++) {
        arr[m] = temp[m];
    }

    return inversionCount;
}

long long mergeSort(int* arr, int* temp, int left, int right) {
    long long inversionCount = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort the left and right sub-arrays and count inversions
        inversionCount += mergeSort(arr, temp, left, mid);
        inversionCount += mergeSort(arr, temp, mid + 1, right);

        // Merge the sorted sub-arrays and update the inversion count
        inversionCount += merge(arr, temp, left, mid, right);
    }

    return inversionCount;
}

long long inversionCount(int* arr, int size) {
    int* temp = new int[size];
    long long result = mergeSort(arr, temp, 0, size - 1);
    delete[] temp;
    return result;
}

int main() {
    int arr[] = {9, 7,5 , 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    long long count = inversionCount(arr, size);

    std::cout << "Inversion count: " << count << std::endl;

    return 0;
}
