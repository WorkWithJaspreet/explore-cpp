// Rope Cutting Problem using Recursion
// Given a rope of length n and three possible cut lengths a, b, and c,
// the task is to find the maximum number of pieces that can be obtained
// by cutting the rope into lengths of a, b, or c.

#include <iostream>

using namespace std;

// This recursive function has time complexity of O(3^n) in the worst case
// and space complexity of O(n) due to function call stack
int maximumCuts(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(maximumCuts(n - a, a, b, c), max(maximumCuts(n - b, a, b, c), maximumCuts(n - c, a, b, c)));
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    cout << "Enter the length of rope: ";
    int n;
    cin >> n;
    cout << "Enter first possible cut length: ";
    int a;
    cin >> a;
    cout << "Enter second possible cut length: ";
    int b;
    cin >> b;
    cout << "Enter third possible cut length: ";
    int c;
    cin >> c;
    if (n <= 0 || a < 0 || b < 0 || c < 0)
    {
        cout << "Please enter positive integers for rope length and cut lengths." << endl;
        return 1;
    }
    (maximumCuts(n, a, b, c) != -1) ? cout << "Maximum number of cuts possible: " << maximumCuts(n, a, b, c) << endl : cout << "Not possible to cut the rope into given lengths." << endl;
    return 0;
}