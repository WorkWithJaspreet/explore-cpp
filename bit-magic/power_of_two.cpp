#include <iostream>

using namespace std;

// This solution has a time complexity of O(d), where d is the last set bit position in n
bool isPowerOf2_naiveApproach(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

// This solution has a time complexity of O(1)
bool isPowerOf2_efficientApproach(int n)
{
    // if (n == 0)
    //     return false;
    // return (n & (n - 1)) == 0;
    return n && ((n & (n - 1)) == 0);
}

int main()
{
    cout << "Enter a decimal number: ";
    int n;
    cin >> n;
    isPowerOf2_naiveApproach(n) ? cout << n << " is a power of 2." << endl
                                : cout << n << " is not a power of 2." << endl;
    isPowerOf2_efficientApproach(n) ? cout << n << " is a power of 2." << endl
                                    : cout << n << " is not a power of 2." << endl;
    return 0;
}