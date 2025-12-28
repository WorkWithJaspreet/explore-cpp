#include <iostream>

using namespace std;

// This function has time complexity of O(min(a, b))
// and auxiliary space complexity of O(1)
int greatestCommonFactor_naive(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
    return res;
}

// This function has time complexity of O(min(a, b))
// and auxiliary space complexity of O(1)
int greatestCommonFactor_euclideanAlgorithm(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

// This function has time complexity of O(log(min(a, b)))
// and auxiliary space complexity of O(log(min(a, b)))
int greatestCommonFactor_euclideanAlgorithm_optimized(int a, int b) // Also, if b is greater, the first call will swap them
{
    if (b == 0)
        return a;
    return greatestCommonFactor_euclideanAlgorithm_optimized(b, a % b); // say a = 3, b = 8, first call will give a = 8, b = 3 as if a < b, so x % y = x
}

int main()
{
    int a = 3234;
    int b = 4293;
    cout << "greatestCommonFactor_naive(a, b) : " << greatestCommonFactor_naive(a, b) << endl;
    cout << "greatestCommonFactor_euclideanAlgorithm(a, b) : " << greatestCommonFactor_euclideanAlgorithm(a, b) << endl;
    cout << "greatestCommonFactor_euclideanAlgorithm_optimized(a, b) : " << greatestCommonFactor_euclideanAlgorithm_optimized(a, b) << endl;
    return 0;
}