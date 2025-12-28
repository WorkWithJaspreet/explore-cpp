#include <iostream>

using namespace std;

// This function has time complexity of O(n)
// and auxiliary space complexity of O(1)
int power_naive(int x, int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
        res *= x;
    return res;
}

// This recursive function has time complexity of T(n) = T(floor(n/2)) + O(1) => O(log n)
// and auxiliary space complexity of O(log n)
int power_efficient(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = power_efficient(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}

int main()
{
    int x = 2;
    int n = 12;
    cout << x << " raised to the power " << n << " is " << power_naive(x, n) << endl;
    cout << x << " raised to the power " << n << " is " << power_efficient(x, n) << endl;
    return 0;
}