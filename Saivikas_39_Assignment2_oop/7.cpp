// Q7. Implement all sorting algorithm (Bubble Sort, Insertion Sort, or Selection Sort)
// using OOP concepts. Use a class and methods for sorting, displaying, and
// inputting data. Explain why object-oriented design improves modularity here.

#include <iostream>
using namespace std;

class Sorting {
private:
    int arr[50];
    int size;

public:
   void getData() {
        cout << "Enter how many numbers: ";
        cin >> size;
        cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void showData() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void bubbleSort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "Array after Bubble Sort: ";
        showData();
    }

    void insertionSort() {
        for (int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        cout << "Array after Insertion Sort: ";
        showData();
    }

    void selectionSort() {
        for (int i = 0; i < size - 1; i++) {
            int minPos = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[minPos]) {
                    minPos = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minPos];
            arr[minPos] = temp;
        }
        cout << "Array after Selection Sort: ";
        showData();
    }
};

int main() {
    Sorting s;
    s.getData();

    cout << "\nUsing Bubble Sort:"<<endl;
    s.bubbleSort();

    cout << "\nUsing Insertion Sort:"<<endl;
    s.insertionSort();

    cout << "\nUsing Selection Sort:"<<endl;
    s.selectionSort();

    return 0;
}
