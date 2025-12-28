#include <iostream>

using namespace std;

// This function has time complexity of O(n)
// and auxiliary space complexity of O(1)
int factorial_naive(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

// Assumption: n >= 0
// This recursive function has time complexity of T(n) = T(n-1) + O(1)
// and auxiliary space complexity of O(n)
int factorial_recursive(int n)
{
    if (n == 0)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main()
{
    int num = 5;
    cout << factorial_naive(num) << endl;
    cout << factorial_recursive(num) << endl;
    return 0;
}