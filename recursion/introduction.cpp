#include <iostream>

using namespace std;

void fun1()
{
    cout << "Inside fun1()" << endl;
}

void fun2()
{
    cout << "Before fun1()" << endl;
    fun1();
    cout << "After fun1()" << endl;
}

void callTheRecursiveFunction(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    callTheRecursiveFunction(n - 1);
}

void recursiveFunctionExperiment(int n, int k)
{
    if (n == 0 || k == 0)
        return;
    cout << "n: " << n << endl;
    recursiveFunctionExperiment(n - 1, k - 1);
    cout << "k: " << k << endl;
}

int main()
{
    // cout << "Before fun2()" << endl;
    // fun2();
    // cout << "After fun2()" << endl;

    // callTheRecursiveFunction(80);

    recursiveFunctionExperiment(100, 100);
    return 0;
}