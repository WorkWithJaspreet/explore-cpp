#include <iostream>
#include <vector>

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

// This function has time complexity of O(n * √n)
// and auxiliary space complexity of O(1)
void printPrimes_naive(int num)
{
    for (int i = 2; i <= num; i++)
        if (isPrime_efficient(i))
            cout << i << " ";
}

// Simple Implementation of Sieve
// This function has time complexity of O(√n)
// and auxiliary space complexity of O(1)
void sieve_printPrimes_efficient1(int num)
{
    vector<bool> isPrime(num + 1, true);
    for (int i = 2; i * i <= num; i++)
        if (isPrime[i])
            for (int j = 2 * i; j <= num; j += i)
                isPrime[j] = false;
    for (int i = 2; i <= num; i++)
        if (isPrime[i])
            cout << i << " ";
}

// Optimized Implementation of Sieve
// This function has time complexity of O(n * log log n)
// and auxiliary space complexity of O(1)
void sieve_printPrimes_efficient2(int num)
{
    vector<bool> isPrime(num + 1, true);
    for (int i = 2; i * i <= num; i++)
        if (isPrime[i])
            for (int j = i * i; j <= num; j += i)
                isPrime[j] = false;
    for (int i = 2; i <= num; i++)
        if (isPrime[i])
            cout << i << " ";
}

// Shorter Implementation of Optimized Sieve
// This function has time complexity of O(√n)
// and auxiliary space complexity of O(1)
void shorterSieve_printPrimes_efficient2(int num)
{
    vector<bool> isPrime(num + 1, true);
    for (int i = 2; i <= num; i++)
        if (isPrime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= num; j += i)
                isPrime[j] = false;
        }
}

int main()
{
    int num = 150;
    cout << "Prime numbers exists till " << num << " are:" << endl;
    printPrimes_naive(num);
    cout << endl;
    cout << "Prime numbers exists till " << num << " are:" << endl;
    sieve_printPrimes_efficient1(num);
    cout << endl;
    cout << "Prime numbers exists till " << num << " are:" << endl;
    sieve_printPrimes_efficient2(num);
    cout << endl;
    cout << "Prime numbers exists till " << num << " are:" << endl;
    shorterSieve_printPrimes_efficient2(num);
    cout << endl;
    return 0;
}