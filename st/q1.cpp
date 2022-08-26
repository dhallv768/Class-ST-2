#include <iostream>
using namespace std;
 

void rearrange(int arr[], int n)
{
    
    for (int i=0; i < n; i++)
        arr[i] += (arr[arr[i]]%n)*n;
 

    for (int i=0; i<n; i++)
        arr[i] /= n;
}
 

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
 

int main()
{
    int n ;
    cin>>n
    int arr[n];
 
    
    printArr(arr, n);
 
    rearrange(arr, n);
 
    printArr(arr, n);
    return 0;
}