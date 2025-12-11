#include <iostream>

using namespace std;

// This recursive function has time complexity of O(n) = T(n-1) + O(1)
// and space complexity of O(n) due to function call stack
int getSum(int n)
{
    if (n == 1)
        return 1;
    return n + getSum(n - 1);
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    cout << "Sum of " << n << " natural numbers is " << getSum(n) << endl;
    return 0;
}