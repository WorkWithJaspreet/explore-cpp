#include <iostream>

using namespace std;

// This recursive function has time complexity of O(d) = T(d-1) + O(1)
// and space complexity of O(d) due to function call stack
// where d is the number of digits in the number n
int addDigits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + addDigits(n / 10);
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "Sum of digits of " << n << " is " << addDigits(n) << endl;
    return 0;
}