#include <iostream>

using namespace std;

// This function has time complexity of O(d)
// where d is the number of digits in the input
bool palindromeNumber(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp /= 10;
    }
    return rev == n;
}

int main()
{
    int num = 121;
    palindromeNumber(num) ? cout << "true" : cout << "false";
    return 0;
}