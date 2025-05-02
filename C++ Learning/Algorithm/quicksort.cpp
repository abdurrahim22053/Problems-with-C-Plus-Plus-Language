#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    
    int pivot = arr[high]; // Choosing the pivot element
    int i = low - 1;       // Index of the smaller element
    
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i+1] and arr[high] (or pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
 
    return i + 1; // Returning the partition index
}

   
void quickSort(int arr[], int low, int high) {

    if (low < high) {
        int pi = partition(arr, low, high); // Partitioning index
 
        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
         
        quickSort(arr, pi + 1, high);
         
    }
}

int main() {
    // int arr[] = {10, 7, 8, 9, 1, 12, 23, 56, 78, 9, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);

int n;
cout<<"Enter the size:";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    quickSort(arr, 0, n - 1);
 
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
