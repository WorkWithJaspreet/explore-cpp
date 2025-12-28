#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
    cout << "[";
    for (int i = 0; i < n - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[n - 1] << "]" << endl;
}

int search_linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
        arr[i + 1] = arr[i];
    arr[idx] = x;
    return n + 1;
}

int main()
{
    int cap = 7;
    int arr[cap];
    int n = 0;
    int x = 22;
    int pos = 3;
    printArray(arr, n);
    cout << "After insert operation, size of the arr is " << insert(arr, n, x, cap, pos) << endl;
    printArray(arr, n);
    // (search_linearSearch(arr, n, x) != -1) ? cout << "The element " << x << " has been found on " << search_linearSearch(arr, n, x) << " index" : cout << "The element " << x << " is not present";

    return 0;
}