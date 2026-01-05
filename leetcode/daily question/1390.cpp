// 1390. Four Divisors

#include <iostream>
#include <vector>

using namespace std;

int countDivisors(int num)
{
    if (num <= 1)
        return -1;
    int count = 0, i;
    for (i = 1; i * i < num; i++)
        if (num % i == 0)
        {
            count++;
            if (count > 2)
                return -1;
        }
    if (i * i == num)
        return -1;
    return (count == 2) ? 4 : -1;
}

int addDivisors(int num)
{
    int sum = 0;
    for (int i = 1; i * i < num; i++)
        if (num % i == 0)
        {
            sum += i;
            sum += num / i;
        }
    return sum;
}

int sumFourDivisors(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
        if (countDivisors(nums[i]) == 4)
            sum += addDivisors(nums[i]);
    return sum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = sumFourDivisors(nums);
    cout << result << "\n";
    return 0;
}