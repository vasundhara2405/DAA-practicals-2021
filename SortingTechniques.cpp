#include  <bits/stdc++.h>
using namespace std;
int c=0,t=0,k=0,r=0 ;
//insertion sort with comparision
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
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//merge sort with comparision
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}
void Merge(int A[],int l,int mid,int h)
{
int i=l,j=mid+1,k=l;
int B[100];

while(i<=mid && j<=h)
{
if(A[i]<A[j])
B[k++]=A[i++];
else
B[k++]=A[j++];
c++;
}

for(;i<=mid;i++)
B[k++]=A[i];
for(;j<=h;j++)
B[k++]=A[j];
for(i=l;i<=h;i++)
A[i]=B[i];
}
void MergeSort(int A[],int l,int h)
{
int mid;
if(l<h)
{

mid=(l+h)/2;MergeSort(A,l,mid);
MergeSort(A,mid+1,h);
Merge(A,l,mid,h);
}

}
void comparsion(){
cout<<"comparsion  :"<<c<<endl;
}
// bubble sort
void Swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
        t++;
            Swap(&arr[j], &arr[j+1]);
}
 
  void compare(){
  cout<<"comparision:-"<<  t<<endl;
 }
/* Function to print an array */
void printarray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// selection sort
void swapp(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        k++;
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swapp(&arr[min_idx], &arr[i]);
    }
}
  void comp(){
  cout<<"no.of comparsion:-"<<k<<endl;
   }
/* Function to print an array */
void printArrayy(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//Quick sort
void swaap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];  
    int i = (low - 1);  
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        { r++;
            i++;    
            swaap(&arr[i], &arr[j]);
        }
    }
    swaap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    { int pi = partition(arr, low, high);
  quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void cmp(){
cout<<"no. of comparsion:--"<<r<<endl;
}

void printtArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
       
        cout<<arr[i]<<"\n";
   
}
 
int main()
 { //insertion sort
 cout<<"insertion sort:--"<<endl;
 
  int arr[]={5,4,10,1,6,2};
  int n=sizeof(arr)/sizeof(arr[0]);

   insertionSort(arr,n);
  printArray(arr,n);
  cout<<"-----------------------------"<<endl;
 
  //merge sort
  cout<<"merge sort :--"<<endl;
  int A[]={11,13,7,12,16,9,24,5,10,3},b=10,i;
MergeSort(A,0,b-1);
comparsion();
cout<<"Array after Sorting"<<endl;
for(i=0;i<10;i++)
cout<<A[i]<<endl;
cout<<"-----------------------------"<<endl;


// bubble sort
cout<<"bubble sort :--"<<endl;
int aryr[] = {64, 34, 25, 12, 22, 11, 90};
    int h = sizeof(aryr)/sizeof(aryr[0]);
    bubbleSort(aryr, h);
    compare();
    cout<<"Sorted array: \n";
    printarray(aryr, h);
    cout<<"-----------------------------"<<endl;
   
    // selection sort
    cout<<"selection sort :--"<<endl;
    int arri[] = {64, 25, 12, 22, 11};
    int a = sizeof(arri)/sizeof(arri[0]);
    selectionSort(arri, a);
    comp();
    cout << "Sorted array: \n";
    printArrayy(arri, a);
    cout<<"-----------------------------"<<endl;
   
//quick sort
cout<<"Quick sort :--"<<endl;
int aarr[] = {10, 7, 8, 9, 1, 5};
    int p = sizeof(aarr)/sizeof(aarr[0]);
    quickSort(aarr, 0, p-1);
    cmp();
    cout<<"sorted array";
    printtArray(aarr, p);

  return 0;
}
