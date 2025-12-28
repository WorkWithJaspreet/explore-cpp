#include <iostream>

using namespace std;

// This function has time complexity of O(n)
// and auxiliary space complexity of O(1)
bool isPrime_naive1(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

// This function has time complexity of O(√n)
// and auxiliary space complexity of O(1)
bool isPrime_naive2(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

// This function has time complexity of O(√n)
// and auxiliary space complexity of O(1)
bool isPrime_efficient(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    int num = 1;
    isPrime_naive1(num) ? cout << "true" << endl : cout << "false" << endl;
    isPrime_naive2(num) ? cout << "true" << endl : cout << "false" << endl;
    isPrime_efficient(num) ? cout << "true" << endl : cout << "false" << endl;
    return 0;
}