#include <iostream>
using namespace std;

// Fungsi untuk melakukan pengurutan dengan algoritma Quick Sort
void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int temp;
    int pivot = arr[(left + right) / 2];

    /* Pembagian */
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    };

    /* Pengurutan rekursif */
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Array yang sudah diurutkan:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}