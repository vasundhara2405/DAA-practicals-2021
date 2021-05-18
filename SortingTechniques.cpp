
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n) {
  int i, key ,j, count=0;
  for (i = 1; i < n; i++) {
    key=arr[i];
    j=i-1;
    while (( j>=0 ) && ( arr[j]>key )) {
count++;
    arr[j+1]=arr[j];
    j=j-1;

    }
    arr[j+1]=key;

  }
  cout<<"Comparisons : "<<count<<endl;
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1); 
 
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
  for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  int i = 0;
   int j = 0;
 int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
   while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    {   min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
   swap(&arr[min_idx], &arr[i]); 
    } 
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
  int arr[]={5,4,10,1,6,2};
  int n=sizeof(arr)/sizeof(arr[0]);
   
   insertionSort(arr,n);
    cout<<"Sorted array after Insertion sort:\n";
   printArray(arr,n);
   cout<<"Sorted array after Quick sort:\n";
   quickSort(arr, 0, n - 1);
    printArray(arr,n);
   cout<<"Sorted array after Merge sort:\n";
    mergeSort(arr, 0, n - 1);
   printArray(arr,n);
   cout<<"Sorted array after Selection sort:\n";
   selectionSort(arr, n); 
   printArray(arr,n);
 cout<<"Sorted array after Bubble sort:\n";
   bubbleSort(arr, n); 
   printArray(arr,n);
  return 0;
}
