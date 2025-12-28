// 3432. Count Partitions with Even Sum Difference

#include <iostream>
#include <vector>

using namespace std;

// This function has time complexity of O(n^2)
// and auxiliary space complexity of O(1)
int countPartitionsWithEvenSumDifference_naive1(vector<int> &nums)
{
    int n = nums.size();
    int partitions = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int sumLeft = 0;
        int sumRight = 0;
        for (int j = 0; j <= i; j++)
            sumLeft += nums[j];
        for (int k = i + 1; k < n; k++)
            sumRight += nums[k];
        int difference = sumLeft - sumRight;
        if (difference < 0)
            difference = -difference;
        if (difference % 2 == 0)
            partitions++;
    }
    return partitions;
}

// This function has time complexity of O(n^2)
// and auxiliary space complexity of O(1)
int countPartitionsWithEvenSumDifference_naive2(vector<int> &nums)
{
    int n = nums.size();
    int partitions = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int sumDifference = 0;
        for (int j = 0; j <= i; j++)
            sumDifference += nums[j];
        for (int k = i + 1; k < n; k++)
            sumDifference -= nums[k];
        if (sumDifference % 2 == 0)
            partitions++;
    }
    return partitions;
}

int main()
{
    vector<int> nums = {10, 10, 3, 7, 6};
    cout << "nums = {10, 10, 3, 7, 6}" << endl;
    cout << "countPartitionsWithEvenSumDifference_naive1(nums): " << countPartitionsWithEvenSumDifference_naive1(nums) << endl;
    cout << "countPartitionsWithEvenSumDifference_naive2(nums): " << countPartitionsWithEvenSumDifference_naive2(nums) << endl;
    nums = {1, 2, 2};
    cout << "nums = {1, 2, 2}" << endl;
    cout << "countPartitionsWithEvenSumDifference_naive1(nums): " << countPartitionsWithEvenSumDifference_naive1(nums) << endl;
    cout << "countPartitionsWithEvenSumDifference_naive2(nums): " << countPartitionsWithEvenSumDifference_naive2(nums) << endl;
    return 0;
}