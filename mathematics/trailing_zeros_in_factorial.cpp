#include <iostream>

using namespace std;

// This function has time complexity of O(n)
// and auxiliary space complexity of O(1)
int countTrailingZeros_naive(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    int res = 0;
    while (fact % 10 == 0)
    {
        res++;
        fact /= 10;
    }
    return res;
}

// This function has time complexity of O(log n)
// and auxiliary space complexity of O(1)
int countTrailingZeros_efficient(int num)
{
    int res = 0;
    for (int i = 5; i <= num; i *= 5) // 5^k <= n
        res += num / i;               // k <= log base(5) input(n)
    return res;
}

int main()
{
    int num = 251;
    // cout << countTrailingZeros_naive(num) << endl;
    cout << countTrailingZeros_efficient(num) << endl;
    return 0;
}