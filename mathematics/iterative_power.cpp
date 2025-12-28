#include <iostream>

using namespace std;

// Iterative Power (Binary Exponentiation)
// This function has time complexity of O(log n)
// and auxiliary space complexity of O(1)
int power_efficientThanComputingPower1(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
            res *= x;
        x *= x;
        n /= 2;
    }
    return res;
}

// This function has time complexity of O(log n)
// and auxiliary space complexity of O(1)
int power_efficientThanComputingPower2(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
            res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}

int power_efficientThanComputingPower2(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        n >>= 1;
    }
    return res;
}

int main()
{
    int x = 2;
    int n = 30;
    cout << x << " raised to the power " << n << " is " << power_efficientThanComputingPower1(x, n) << endl;
    cout << x << " raised to the power " << n << " is " << power_efficientThanComputingPower2(x, n) << endl;
    return 0;
}