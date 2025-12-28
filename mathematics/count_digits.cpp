#include <iostream>

using namespace std;

// This function has time complexity of O(d)
// where d is the number of digits in the input
int countDigits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n /= 10;
        res++;
    }
    return res;
}

int main()
{
    int num = 12345;
    cout << countDigits(num);
    return 0;
}