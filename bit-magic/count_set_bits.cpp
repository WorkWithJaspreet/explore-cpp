#include <iostream>

using namespace std;

// This solution has a time complexity of O(d), where d is the last set bit position in n
int countSetBits_naiveApproach1(int n)
{
    int res = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
            res++;
        n = n / 2;
    }
    return res;
}

// This solution has a time complexity of O(d), where d is the last set bit position in n
int countSetBits_naiveApproach2(int n)
{
    int res = 0;
    while (n > 0)
    {
        res += (n & 1);
        n = n / 2;
    }
    return res;
}

// Brian Kernighan's Algorithm
// This algorithm has a time complexity of O(s), where s is the number of set bits in n
int countSetBits_brianKerningamAlgorithm(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}

// Lookup Table Method
// Preprocess the lookup table
int lookupTable[256];
void initialize()
{
    lookupTable[0] = 0;
    for (int i = 1; i < 256; i++)
        lookupTable[i] = lookupTable[i & (i - 1)] + 1;
}

// This solution has a time complexity of O(1) after preprocessing
int countSetBits_lookupTable(int n)
{
    return lookupTable[n & 255] +
           lookupTable[(n >> 8) & 255] +
           lookupTable[(n >> 16) & 255] +
           lookupTable[(n >> 24) & 255];
}

int main()
{
    cout << "Enter a decimal number: ";
    int n;
    cin >> n;
    cout << "Number of set bits in " << n << " is " << countSetBits_naiveApproach1(n) << endl;
    cout << "Number of set bits in " << n << " is " << countSetBits_naiveApproach2(n) << endl;
    cout << "Number of set bits in " << n << " is " << countSetBits_brianKerningamAlgorithm(n) << endl;
    return 0;
}