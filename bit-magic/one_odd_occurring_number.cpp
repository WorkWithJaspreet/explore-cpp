#include <iostream>

using namespace std;

void getArrayElements(int arr[], int size)
{
    cout << "Enter the elements for array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void printArrayElements(int arr[], int size)
{
    cout << "The elements in the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// This solution has a time complexity of O(n^2)
int findOddOccurringNumber_naiveApproach(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
            if (arr[i] == arr[j])
                count++;
        if (count % 2 != 0)
            return arr[i];
    }
    return -1;
}

// This solution has a time complexity of O(n) and space complexity of O(1)
int findOddOccurringNumber_efficientApproach(int arr[], int size)
{
    int res = arr[0];
    for (int i = 1; i < size; i++)
        res ^= arr[i];
    return res;
}

int main()
{
    cout << "Enter the size (odd number) for array: ";
    int size;
    cin >> size;
    if (size % 2 == 0)
    {
        cout << "Size must be an odd number." << endl;
        return 1;
    }
    int arr[size];
    getArrayElements(arr, size);
    printArrayElements(arr, size);
    cout << "The number occurring odd number of times is " << findOddOccurringNumber_naiveApproach(arr, size) << endl;
    cout << "The number occurring odd number of times is " << findOddOccurringNumber_efficientApproach(arr, size) << endl;
    return 0;
}