#include<iostream>
using namespace std;
void selectionSort(int array[], int size) {
   int i, j, index_min;
   for(i = 0; i<size-1; i++) {
      index_min = i;
      for(j = i+1; j<size; j++)
         if(array[j] < array[index_min])
            index_min = j;
         swap(array[i], array[index_min]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   for(int i = 0; i<n; i++)
   cout << arr[i] << " ";
}
