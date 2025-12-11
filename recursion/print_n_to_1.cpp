#include <iostream>

using namespace std;

// This recursive function has time complexity of O(n) = T(n-1) + O(1)
// and space complexity of O(n) due to function call stack.
void print_n_to_1(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    print_n_to_1(n - 1);
}

// This simulates how the compiler may optimize tail recursion as it can be converted into a loop
void tailRecursiveFunction_madeByCompiler(int n)
{
start:
    if (n == 0)
        return;
    cout << n << endl;
    n -= 1;
    goto start;
}

int main()
{
    cout << "Enter a positive number: ";
    int n;
    cin >> n;
    cout << "Printing numbers from " << n << " to 1 using recursion:" << endl;
    print_n_to_1(n);
    cout << "Printing numbers from " << n << " to 1 using a loop-like version "
         << "(this is how the compiler may optimize a tail-recursive function):" << endl;
    tailRecursiveFunction_madeByCompiler(n);
    return 0;
}
