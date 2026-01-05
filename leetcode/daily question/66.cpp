// 66. Plus One

#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int i = digits.size() - 1;
    if (digits[i] != 9)
    {
        digits[i]++;
        return digits;
    }
    while (i >= 0 && digits[i] == 9)
    {
        digits[i] = 0;
        i--;
    }
    if (i == -1)
    {
        digits.insert(digits.begin(), 1);
        return digits;
    }
    digits[i]++;
    return digits;
}

int main()
{
    vector<int> digits = {9, 9, 9, 9};
    vector<int> result = plusOne(digits);
    for (int x : result)
        cout << x << " ";
    return 0;
}