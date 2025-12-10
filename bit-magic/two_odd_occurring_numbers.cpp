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

// This solution has a time complexity of O(n^2) and space complexity of O(1)
void findOddOccurringNumbers_naiveApproach(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
            if (arr[i] == arr[j])
                count++;
        if (count % 2 != 0)
            cout << arr[i] << " ";
    }
}

// This solution has a time complexity of O(n) and space complexity of O(1)
int findOddOccurringNumbers_efficientApproach(int arr[], int size)
{
    int res = arr[0];
    for (int i = 1; i < size; i++)
        res ^= arr[i];
    return res;
}

int main()
{
    cout << "Enter the size for array: ";
    int size;
    cin >> size;
    int arr[size];
    getArrayElements(arr, size);
    printArrayElements(arr, size);
    cout << "The numbers occurring odd number of times are: " << endl;
    findOddOccurringNumbers_naiveApproach(arr, size);
    cout << "\nThe numbers occurring odd number of times are " << findOddOccurringNumbers_efficientApproach(arr, size) << endl;
    return 0;
}