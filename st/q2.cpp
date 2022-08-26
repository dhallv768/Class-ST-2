#include <iostream>
#include <algorithm>
void findPair(int arr[], int n, int sum)
{
    std::sort(arr, arr + n);
    int low = 0;
    int high = n - 1;
    while (low < high)
    {

        if (arr[low] + arr[high] == sum)
        {
            std::cout << "Pair found";
            return;
        }
        (arr[low] + arr[high] < sum)? low++: high--;
    }
    std::cout << "Pair not found";
}
int main()
{
    int arr[] = { 8, 7, 2, 5, 3, 1};
    int sum = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    findPair(arr, n, sum);
    return 0;
}
