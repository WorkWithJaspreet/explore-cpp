#include <iostream>

using namespace std;

// This solution has a time complexity of O(k)
bool isKthBitSet_naiveApproach1(int n, int k)
{
    int x = 1;
    for (int i = 1; i <= (k - 1); i++)
        x *= 2;
    return (n & x) != 0;
}

// This solution has a time complexity of O(k)
bool isKthBitSet_naiveApproach2(int n, int k)
{
    int x = 1;
    for (int i = 1; i <= (k - 1); i++)
        n /= 2;
    return (n & 1) != 0;
}

// This solution has a time complexity of O(1)
bool isKthBitSet_efficientApproach1(int n, int k)
{
    int x = 1 << (k - 1);
    return (n & x) != 0;
}

// This solution has a time complexity of O(1)
bool isKthBitSet_efficientApproach2(int n, int k)
{
    int x = n >> (k - 1);
    return (x & 1) != 0;
}

int main()
{
    cout << "Enter a decimal number: ";
    int n;
    cin >> n;
    cout << "Enter the value of k (to check if k-th bit is set): ";
    int k;
    cin >> k;
    isKthBitSet_naiveApproach1(n, k) ? cout << "The " << k << "-th bit is set." << endl
                                     : cout << "The " << k << "-th bit is not set." << endl;
    isKthBitSet_naiveApproach2(n, k) ? cout << "The " << k << "-th bit is set." << endl
                                     : cout << "The " << k << "-th bit is not set." << endl;
    isKthBitSet_efficientApproach1(n, k) ? cout << "The " << k << "-th bit is set." << endl
                                         : cout << "The " << k << "-th bit is not set." << endl;
    isKthBitSet_efficientApproach2(n, k) ? cout << "The " << k << "-th bit is set." << endl
                                         : cout << "The " << k << "-th bit is not set." << endl;
    return 0;
}