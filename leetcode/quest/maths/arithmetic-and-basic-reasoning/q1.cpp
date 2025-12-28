// Q1. Can Make Arithmetic Progression From Sequence

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canMakeArithmeticProgression_naive(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int initialDifference = abs(arr[0] - arr[1]);
    for (int i = 0; i < n - 1; i++)
    {
        int currentDifference = abs(arr[i] - arr[i + 1]);
        if (initialDifference != currentDifference)
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 4};
    canMakeArithmeticProgression_naive(arr) ? cout << "true" : cout << "false";
    return 0;
}