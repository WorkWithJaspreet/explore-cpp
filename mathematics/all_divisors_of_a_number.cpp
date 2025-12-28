#include <iostream>

using namespace std;

// This function has time complexity of O(n)
// and auxiliary space complexity of O(1)
void printDivisors_naive(int num)
{
    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            cout << i << " ";
}

// This function has time complexity of O(√n)
// and auxiliary space complexity of O(1)
void printDivisors_efficient1(int num)
{
    for (int i = 1; i * i <= num; i++)
        if (num % i == 0)
        {
            cout << i << " ";
            if (i != num / i)
                cout << num / i << " ";
        }
}

// This function has time complexity of O(√n)
// and auxiliary space complexity of O(1)
void printDivisors_efficient2(int num)
{
    int i;
    for (i = 1; i * i < num; i++)
        if (num % i == 0)
            cout << i << " ";
    for (; i >= 1; i--)
        if (num % i == 0)
            cout << num / i << " ";
}

int main()
{
    int num = 218648;
    printDivisors_naive(num);
    cout << endl;
    printDivisors_efficient1(num);
    cout << endl;
    printDivisors_efficient2(num);
    return 0;
}