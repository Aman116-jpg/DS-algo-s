
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {5, 2, 9, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {7, 4, 3, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[size1 + size2];
    int mergedSize = size1 + size2;

    // Merge the two arrays while sorting
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    for (int i = 0; i < mergedSize; i++) {
        for (int j = i + 1; j < mergedSize; j++) {
            if (merged[i] > merged[j]) {
                // Swap elements if they are out of order
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    cout << "Merged and sorted array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << merged[i] << " ";
    }

    return 0; // Add this line to indicate a successful program execution
}




























