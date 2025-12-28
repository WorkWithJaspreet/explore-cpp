#include <iostream>

using namespace std;

// This function has time complexity of O(a*b - max(a, b))
// and auxiliary space complexity of O(1)
int leastCommonMultiple_naive(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        res++;
    }
    return res;
}

// This function has time complexity of O(log(min(a, b)))
// and auxiliary space complexity of O(log(min(a, b)))
int greatestCommonFactor_euclideanAlgorithm_optimized(int a, int b) // Also, if b is greater, the first call will swap them
{
    if (b == 0)
        return a;
    return greatestCommonFactor_euclideanAlgorithm_optimized(b, a % b); // say a = 3, b = 8, first call will give a = 8, b = 3 as if a < b, so x % y = x
}

// a*b = gcd(a,b) * lcm(a,b)
// This solution using GCD using Euclidean Algorithm has time complexity of O(log(min(a, b)))
// and auxiliary space complexity of O(log(min(a, b)))
int leastCommonMultiple_usingGcdFromEuclideanAlgorithm(int a, int b) { return (a * b) / greatestCommonFactor_euclideanAlgorithm_optimized(a, b); }

int main()
{
    int a = 83;
    int b = 92;
    cout << "leastCommonMultiple_naive(a, b) : " << leastCommonMultiple_naive(a, b) << endl;
    cout << "leastCommonMultiple_usingGcdFromEuclideanAlgorithm(a, b) : " << leastCommonMultiple_usingGcdFromEuclideanAlgorithm(a, b) << endl;
    return 0;
}