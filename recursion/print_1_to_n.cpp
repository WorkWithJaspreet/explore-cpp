#include <iostream>

using namespace std;

// This recursive function has time complexity of O(n) = T(n-1) + O(1)
// and space complexity of O(n) due to function call stack
// Also this is not a tail-recursive function as the recursive call is not the last operation in the function
// Hence, compiler cannot optimize it
// But we can convert it into a tail-recursive function
// and its equivalent tail-recursive function is given below this function
void print_1_to_n(int n)
{
    if (n == 0)
        return;
    print_1_to_n(n - 1);
    cout << n << endl;
}

// This is a tail-recursive function as the recursive call is the last operation in the function
// Hence, compiler can optimize it
void print_1_to_n_convertedToTailRecursiveFunction(int n, int k)
{
    if (n == 0)
        return;
    cout << k << endl;
    print_1_to_n_convertedToTailRecursiveFunction(n - 1, k + 1);
}

int main()
{
    cout << "Enter a positive number: ";
    int n;
    cin >> n;
    cout << "Printing numbers from 1 to " << n << " using recursion:" << endl;
    print_1_to_n(n);
    cout << "Printing numbers from 1 to " << n << " using recursion (tail-recursive version):" << endl;
    print_1_to_n_convertedToTailRecursiveFunction(n, 1);
    return 0;
}