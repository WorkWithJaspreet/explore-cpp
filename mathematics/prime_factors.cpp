#include <iostream>

using namespace std;

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

// As this is using isPrime_efficient() function
// This function has time complexity of O(n * √n)
// and auxiliary space complexity of O(1)
void primeFactors_naive(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (isPrime_efficient(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x *= i;
            }
        }
}

// This function has time complexity of O(√n)
// and auxiliary space complexity of O(1)
void primeFactors_efficient1(int n)
{
    if (n <= 1)
        return;
    for (int i = 2; i * i <= n; i++)
        while (n % i == 0)
        {
            cout << 2 << " ";
            n /= i;
        }
    if (n > 1)
        cout << n;
}

// This function has time complexity of O(√n)
// and auxiliary space complexity of O(1)
void primeFactors_efficient2(int n)
{
    if (n <= 1)
        return;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n /= 3;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n /= (i + 2);
        }
    }
    if (n > 3)
        cout << n;
}

int main()
{
    int num = 1024;
    cout << "Printing prime factors of " << num << ": ";
    primeFactors_naive(num);
    cout << "\nPrinting prime factors of " << num << ": ";
    primeFactors_efficient1(num);
    cout << "\nPrinting prime factors of " << num << ": ";
    primeFactors_efficient2(num);
    return 0;
}