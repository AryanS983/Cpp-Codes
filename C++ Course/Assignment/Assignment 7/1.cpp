#include <iostream>
using namespace std;
void acceptElements(int arr[], int size);
void displayElements(int arr[], int size);
void insertionSort(int arr[], int size);
void selectionSort(int arr[], int size);
void bubbleSort(int arr[], int size);

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size = 0;
    char choice;
    do {
        cout << "MENU:" << endl;
        cout << "a. Accept elements of an array" << endl;
        cout << "b. Display elements of an array" << endl;
        cout << "c. Sort the array using insertion sort method" << endl;
        cout << "d. Sort the array using selection sort method" << endl;
        cout << "e. Sort the array using bubble sort method" << endl;
        cout << "f. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 'a':
                cout << "Enter number of elements: ";
                cin >> size;
                acceptElements(arr, size);
                break;
            case 'b':
                displayElements(arr, size);
                break;
            case 'c':
                insertionSort(arr, size);
                cout << "Array sorted using insertion sort." << endl;
                break;
            case 'd':
                selectionSort(arr, size);
                cout << "Array sorted using selection sort." << endl;
                break;
            case 'e':
                bubbleSort(arr, size);
                cout << "Array sorted using bubble sort." << endl;
                break;
            case 'f':
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'f');
    return 0;
}
void acceptElements(int arr[], int size) {
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}
void displayElements(int arr[], int size) {
    cout << "Elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
